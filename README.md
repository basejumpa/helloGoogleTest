# Getting Started With GoogleTest on Windows with MinGW64

Note: This page has been created with the wonderfull http://tmpvar.com/markdown.html 


## Step 1: Install MSYS2
* Go to http://sourceforge.net/projects/msys2
* Download MSYS2 (its a 64Bit environment)
* Install. We've chosen the default ''c:\msys64'' here. If you are using another path, adapt the following instructions accordingly.
* The Setup should now start your shell.
* In general, it is a standard shell you will find on many Linux and Unix systems out there. It might look old-school but the reason that this kind of interaction still exists is that it is proven to be effective if used accordingly. MSYS2 provides a package management system to the user.
* First, update package database and your setup:

    $ pacman -Syu
* Exit the shell because after these heavy updates the shell becomes unreliable when working w/o a clean re-start:

    $ exit
* Start the shell again via "C:\msys64\mingw64.exe". It is important that you choose the right shell (there two others: the MSYS and the MinGW32 shells. But use the MinGW64!)
* Install git (with "gui-stuff), make, cmake and gcc, cmake, python-2.x (Note: We install git and make for MSYS, the others for MinGW64 here. The fact that we do not use the MinGW-make is important for building the googletest!)

    $ pacman -S git mingw64/mingw-w64-x86_64-tk make mingw64/mingw-w64-x86_64-gcc mingw64/mingw-w64-x86_64-cmake mingw64/mingw-w64-x86_64-extra-cmake-modules mingw64/mingw-w64-x86_64-python2
* Exit the shell:
    $ exit

General informations about MSYS2 and the package manager system "pacman": See http://sourceforge.net/p/msys2/wiki/MSYS2%20installation/

''(Remark: Thanks to the Open Source Project "OpenWalnut" http://www.openwalnut.org/projects/openwalnut/wiki/InstallMSYS2 OpenWalnut for the really nice wiki I used to derive the above steps from.)''


Mind the ampersand at the end of the command line. This causes eclipse running in the background as an forked process of the shell. You now still can work in the shell and also in Eclipse.

## Step 2: Clone GoogleTest repository
* Start the shell via "C:\msys64\mingw64_shell.bat" 
* Make sure that you're in your home directory (the home-directory is located under "C:\msys64\home\you"):

    $ cd 
* Clone the GoogleTest repository:

    $ git clone https://github.com/google/googletest.git

## Step 3: Build GoogleTest
* Start the shell via "C:\msys64\mingw64_shell.bat" 
* Make sure that you're in your home directory (the home-directory is located under "C:\msys64\home\you"):

    $ cd 
* Change to the googleTest directory:

    $ cd googletest
* Generate the makefiles suitable for your environment:

    $ cmake -G "MSYS Makefiles"
* Start the make process of both googletest and googlemock libraries:

    $ make
* Install the googletest's header files and libraries by copying into the system's folders:

    $ cp -r googletest/include/gtest/ /mingw64/include/gtest
    $ cp googlemock/gtest/libgtest*.a /mingw64/lib/
	 $ cp -r googlemock/include/gmock/ /mingw64/include/gmock
	 $ cp googlemock/libgmock*.a /mingw64/lib/
	 

## Step 4: Clone this repository
* Start the shell via "C:\msys64\mingw64_shell.bat" 
* Make sure that you're in your home directory (the home-directory is located under "C:\msys64\home\you"):

    $ cd 
* Clone this repository:

    $ git clone https://github.com/basejumpa/helloGoogleTest.git

## Step 5: Use the example
* Start the shell via "C:\msys64\mingw64_shell.bat"
* Make sure that you're in your home directory (the home-directory is located under "C:\msys64\home\you"):

    $ cd 
* Change to the project directory in the shell:

    $ cd helloGoogleTest	 
* Make it:

    $ make
* All runs automatically:
** Compile, link, run


## Ressources:
* https://github.com/google/googletest
* http://www.ibm.com/developerworks/aix/library/au-googletestingframework.html
