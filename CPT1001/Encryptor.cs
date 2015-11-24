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
    public class Encryptor
    {
        private System.Runtime.Serialization.IFormatter formatter;

        /// <summary>
        /// Initializes a new instance of the <see cref="Crypto.Encryptor"/> class and demonstrates encryption of serializable objects.
        /// </summary>
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

        /// <summary>
        /// Returns an implementation of <see cref="System.Security.Cryptography.SymmetricAlgorithm"/>.
        /// </summary>
        /// <remarks>
        /// This is a helper method so the exact implementation of the encryption algorithm is mute.
        /// Be wary that changing the specific implementation changes the requirements of the secret key and IV.
        /// </remarks>
        /// <returns>Implementation of <see cref="Sytstem.Security.Cryptography.SymmetricAlgorithm"/></returns>
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

        /// <summary>
        /// Decrypts and deserializes a byte array into a <see cref="Crypto.Data"/> object given the secret key and initialization vector.
        /// </summary>
        /// <param name="cipherObject">Encrypted byte array of serialized object.</param>
        /// <param name="key">Secret key to decrypt <paramref name="cipherObject"/> byte array.</param>
        /// <param name="iv">Initialiation vector (IV) to decrypt <paramref name="cipherObject"/> byte array.</param>
        /// <returns>A <see cref="Crypto.Data"/> object on successful decryption and deserialization.</returns>
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

        /// <summary>
        /// Prints contents of a <see cref="byte[]"/>.
        /// </summary>
        /// <param name="array">A byte array to print its contents.</param>
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
