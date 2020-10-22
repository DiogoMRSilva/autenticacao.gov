# Setup Instructions:

This are the instructions required to compile the middleware on Visual Studio 2013

1. Install [Conan](https://conan.io) package manager.
2. Install 32 and 64 dependencies using the following commands, inside the `pteid-mw-pt\windows` directory:

    `conan install .\ConanFiles --profile=.\ConanFiles\deps_32 -install-folder=.\_win-deps-32 --build *`
        `conan install .\ConanFiles --profile=.\ConanFiles\deps_64 -install-folder=.\_win-deps-64 --build *`
    
3. Rename `zip.lib` to `libzip.lib` inside `libzip\lib` folder inside of both `_win_deps_32` and `_win_deps_64`.
4. Copy the `.exp` files for **libpng** and **openjpeg**. They can be obtained from the build folders inside `conan\data` for the appropriate architecture. 
5. Compile `xerces-c` and `xml-security` from source using the notes bellow as helpers.
6. Copy the result from the previous step to the corresponding architecture folders`.\_win-deps-32` and `.\_win-deps-64`.
6. Update the `set_path_autenticacao.gov.bat` and point to the lib folders inside `.\_win-deps-32` and `.\_win-deps-64`.
7. Install the required applications indicated on the main readme and update the respective lines on `set_path_autenticacao.gov.bat`.

## XML Security

Version: 1.7.3

Source: [link](https://santuario.apache.org/cinstallation.html)

Build notes: 

* Release minimal
* Build for x86 and x64

## GUI

To build the GUI related projects you will also need `poppler-qt5 0.52`. This will need to be compiled from source.
