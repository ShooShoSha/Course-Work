/* 
 * Encryptor - Encrypts and decrypts serializable objects.
 * Copyright (C) 2015  Kevin O'Brien
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

namespace Crypto
{
    /// <summary>
    /// Simple object to show the serialization and encryption processes.
    /// </summary>
    [System.Serializable]
    public class Data
    {
        /// <summary>
        /// Test property to verify encryption process.
        /// </summary>
        public string Info;
    }
    
    /// <summary>
    /// Serializes, encrypts, decrypts, and deserializes the <see cref="Crypto.Data"/> object.
    /// </summary>
    class Encryptor
    {
        private System.Runtime.Serialization.IFormatter formatter;

        public Encryptor()
        {
            // Setup debugging information
            System.Diagnostics.Debug.Listeners.Add(new System.Diagnostics.TextWriterTraceListener(System.Console.Out));
            System.Diagnostics.Debug.AutoFlush = true;
            System.Diagnostics.Debug.Indent();
            
            // Instantiate formatter
            this.formatter = new System.Runtime.Serialization.Formatters.Binary.BinaryFormatter();

            // Instatiate encryption algorithm
            var cipherAlgorithm = CreateAlgorithm();
            cipherAlgorithm.GenerateKey();
            cipherAlgorithm.GenerateIV();

            // Instatiate serializable object
            Data testData = new Data()
            {
                Info = "testing string"
            };


        }

        private System.Security.Cryptography.SymmetricAlgorithm CreateAlgorithm()
        {
            return System.Security.Cryptography.Rijndael.Create();
        }

        private byte[] SerializeAndEncrypt(object plainObject, byte[] key, byte[] iv)
        {
            byte[] cipherObject = null;
            using (var cipher = CreateAlgorithm())
            {
                using (var ms = new System.IO.MemoryStream())
                {
                    using (var es = new System.Security.Cryptography.CryptoStream(ms, cipher.CreateEncryptor(key, iv), System.Security.Cryptography.CryptoStreamMode.Write))
                    {
                        this.formatter.Serialize(es, plainObject);
                    }
                    cipherObject = ms.ToArray();
                }
            }
            return cipherObject;
        }

        [System.Obsolete("Generates new IV", false)]
        private System.Tuple<byte[], byte[]> SerializeAndEncrypt(object plainObject, byte[] key)
        {
            byte[] cipherObject = null;
            byte[] iv = null;
            using (var cipher = CreateAlgorithm())
            {
                cipher.Key = key;
                cipher.GenerateIV();
                iv = cipher.IV;
                using (var ms = new System.IO.MemoryStream())
                {
                    using (var es = new System.Security.Cryptography.CryptoStream(ms, cipher.CreateEncryptor(), System.Security.Cryptography.CryptoStreamMode.Write))
                    {
                        this.formatter.Serialize(es, plainObject);
                    }
                    cipherObject = ms.ToArray();
                }
            }
            return new System.Tuple<byte[], byte[]>(cipherObject, iv);
        }

        [System.Obsolete("Generates new key and IV", false)]
        private System.Tuple<byte[], byte[], byte[]> SerializeAndEncrypt(object plainObject)
        {
            byte[] cipherObject = null;
            byte[] key = null;
            byte[] iv = null;
            using (var cipher = CreateAlgorithm())
            {
                cipher.GenerateKey();
                cipher.GenerateIV();
                key = cipher.Key;
                iv = cipher.IV;
                using (var ms = new System.IO.MemoryStream())
                {
                    using (var es = new System.Security.Cryptography.CryptoStream(ms, cipher.CreateEncryptor(), System.Security.Cryptography.CryptoStreamMode.Write))
                    {
                        this.formatter.Serialize(es, plainObject);
                    }
                    cipherObject = ms.ToArray();
                }
            }
            return new System.Tuple<byte[], byte[], byte[]>(cipherObject, iv, key);
        }

        private Data DecryptAndDeserialize(byte[] cipherObject, byte[] key, byte[] iv)
        {
            Data plainObject = null;
            using (var cipher = CreateAlgorithm())
            {
                using (var ms = new System.IO.MemoryStream(cipherObject))
                {
                    using (var es = new System.Security.Cryptography.CryptoStream(ms, cipher.CreateDecryptor(key, iv), System.Security.Cryptography.CryptoStreamMode.Read))
                    {
                        plainObject = this.formatter.Deserialize(es) as Data;
                    }
                }
            }
            return plainObject;
        }

        private void Print(byte[] array)
        {
            foreach (byte item in array)
            {
                System.Diagnostics.Debug.Write((char)item + " ");
            }
            System.Diagnostics.Debug.WriteLine(string.Empty);
        }
    }
}
