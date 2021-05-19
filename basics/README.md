# lets start with basics of c

## 1. Data types :

 1. int : this data type stores interger value.

 2. char : this data type stores character value.

 3. float : this data type stores decimal value.

 4. double : this data type stores decimal value.

## 2. Bits of each data type :

 1. int : 2 bytes.

 2. char : 1 byte.

 3. float : 4 bytes.

 4. double : 8 bytes.

## 3. Derived data types :

 1. Arrays.

 2. Pointers.

 3. Structures.

 4. Union.

 5. Functions.

## 4. Enumerated types :

They are again arithmetic types and they are used to define variables that can only assign certain discrete integer values throughout the program.


## 5. void types :

The type specifier void indicates that no value is available.

## 6. Installation :

1) Mac os :

If you use Mac OS X, the easiest way to obtain GCC is to download the Xcode development environment from Apple's web site and follow the simple installation instructions. Once you have Xcode setup, you will be able to use GNU compiler for C/C++.

link for xcode setup 👉🏻 : https://learnappmaking.com/xcode-tutorial/

To check weither clang complier is  installed on your device run the below code in your terminal.

    clang --version

2) UNIX/LINUX :

If you are using Linux or UNIX, then check whether GCC is installed on your system by entering the following command from the command line 

     $ gcc -v

If you have GNU compiler installed on your machine, then it should print a message as follows

      Using built-in specs.
      Target: i386-redhat-linux
      Configured with: ../configure --prefix=/usr .......
      Thread model: posix
      gcc version 4.1.2 20080704 (Red Hat 4.1.2-46)
      
If GCC is not installed, then perform the steps below to install the GCC Compiler on linux

1. Start by updating the packages list:

       sudo apt update

2. Install the build-essential package by typing:

       sudo apt install build-essential
       
2. Install the build-essential package by typing:

       sudo apt install build-essential
      
The command installs a bunch of new packages including gcc, g++ and make.

You may also want to install the manual pages about using GNU/Linux for development:

      sudo apt-get install manpages-dev
      
3. To validate that the GCC compiler is successfully installed, use the gcc --version command which prints the GCC version:

       gcc --version

The default version of GCC available
out put:

       gcc (Ubuntu 7.4.0-1ubuntu1~18.04) 7.4.0
       Copyright (C) 2017 Free Software Foundation, Inc.
       This is free software; see the source for copying conditions.  There is NO
       warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
       
That’s it. GCC is now installed on your system, and you can start using it.

For refrence 👉🏻 : https://linuxize.com/post/how-to-install-gcc-compiler-on-ubuntu-18-04/

