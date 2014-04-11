# Installing MinGW (compilers) on a Windows PC

#### Download and Install MinGW

1. Read the [HOWTO](http://www.mingw.org/wiki/HOWTO_Install_the_MinGW_GCC_Compiler_Suite)
2. Default installation location is at C:\MinGW
3. You will be asked which compilers you would like to install. Choose however many you would like installed.
4. You should also install the MinGW **make** command. It is useful for larger programs

#### Download and Install jGrasp

1. Go to the the jGrasp [website](http://www.jgrasp.org/)
2. Default installation location is at C:\Program Files\jGRASP
3. If you do not have Java installed, you will be asked to install it.
4. Get [Java](http://www.java.com/en/download)
5. Default installation location is at C:\Program Files\Java

#### Associate jGrasp with New Compilers
Now jGrasp should run, but it will not automatically find MinGW. To 
associate the compilers with jGrasp:

1. Start jGrasp, if not all ready running
2. In the **Settings** menu, choose:
	Settings > Compiler Settings > Workspace
3. Under the **Compiler** tab, select **C** as the language
4. Under the **ENvironment** tab, select
	gcc - MinGW(C:\MinGW\bin)
5. Click the button **Use**

#### Now use jGrasp to edit, save, compile, link, and run a C Program

If you encounter problems, look in the folder

	C:\MinGW\bin

Inside you should find gcc.exe (compiler) and ld.exe (linker).
