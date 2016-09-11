# Getting Started With GoogleTest on Windows with MinGW32

Note: This page has been created with the wonderfull http://tmpvar.com/markdown.html 


Attention: We, on purpose, use the 32-bit gcc and not the 64-bit gcc in the MinGW-32 environment here. To use the 64-bit versions you need to adapt this cookbook.


Hint: In case you get errors when trying to retrieve packages via pacman you might have proxy settings which are not suitable. To remove all proxies, for example, you do:

   $ unset http_proxy https_proxy ftp_proxy


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
* Start the shell again via "C:\msys64\mingw32.exe". It is important that you choose the right shell (there two others: the MSYS and the MinGW64 shells. But use the MinGW32!)
* Install git (with "gui-stuff), make, cmake and gcc, cmake, python-2.x (Note: We install git and make for MSYS, the others for MinGW32 here. The fact that we do not use the MinGW-make is important for building the googletest!)

    $ pacman -S git mingw32/mingw-w64-i686-tk make mingw32/mingw-w64-i686-gcc mingw32/mingw-w64-i686-cmake mingw32/mingw-w64-i686-extra-cmake-modules mingw32/mingw-w64-i686-python2
* Exit the shell:
    $ exit

General informations about MSYS2 and the package manager system "pacman": See http://sourceforge.net/p/msys2/wiki/MSYS2%20installation/

''(Remark: Thanks to the Open Source Project "OpenWalnut" http://www.openwalnut.org/projects/openwalnut/wiki/InstallMSYS2 OpenWalnut for the really nice wiki I used to derive the above steps from.)''


Mind the ampersand at the end of the command line. This causes eclipse running in the background as an forked process of the shell. You now still can work in the shell and also in Eclipse.

## Step 2: Clone GoogleTest repository
* Start the shell via "C:\msys64\mingw32.exe" 
* Make sure that you're in your home directory (the home-directory is located under "C:\msys64\home\you"):

    $ cd 
* Clone the GoogleTest repository:

    $ git clone https://github.com/google/googletest.git

## Step 3: Build GoogleTest
* Start the shell via "C:\msys64\mingw32.exe" 
* Make sure that you're in your home directory (the home-directory is located under "C:\msys64\home\you"):

    $ cd 
* Change to the googleTest directory:

    $ cd googletest
* Generate the makefiles suitable for your environment:

    $ cmake -G "MSYS Makefiles"
* Start the make process of both googletest and googlemock libraries:

    $ make
* Install the googletest's header files and libraries by copying into the system's folders:

    $ cp -r googletest/include/gtest/ /mingw32/include/gtest
    $ cp googlemock/gtest/libgtest*.a /mingw32/lib/
	 $ cp -r googlemock/include/gmock/ /mingw32/include/gmock
	 $ cp googlemock/libgmock*.a /mingw32/lib/
	 

## Step 4: Clone this repository
* Start the shell via "C:\msys64\mingw32.exe"  
* Make sure that you're in your home directory (the home-directory is located under "C:\msys64\home\you"):

    $ cd 
* Clone this repository:

    $ git clone https://github.com/basejumpa/helloGoogleTest.git

## Step 5: Use the example
* Start the shell via "C:\msys64\mingw32.exe" 
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
