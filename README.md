# character

Let's get this to compile across Windows, Linux and OSX.

WINDOWS INSTRUCTIONS:
  Running with mingw-w64 (installation instructions to come later). To compile
  use the following command from the installation directory for mingw-w64:
  
    x86_64-w64-mingw32-g++.exe -static -static-libgcc -static-libstdc++ path\to\main.cpp path\to\base_sheet.cpp -o path\to\out\character.exe

  That will create the "character.exe" file and will statically link some 
  necessary libraries so it can be run without pop-up errors about not having 
  some dlls installed.

  Running the executable will print the following:

    $ character.exe
    STARTING UP
    ==========================
    RACE: NoRace
    CLASS: NoClass
    
    PRIMARY ATTRIBUTES:
    Strength: 8
    Dexterity: 8
    Constitution: 8
    Intelligence: 8
    Wisdom: 8
    Charisma: 8
    
    SECONDARY ATTRIBUTES:
    Speed: 25
    Alignment: Neutral/Neutral
    ==========================

OSX INSTURCTIONS:
  
    g++ main.cpp base_sheet.cpp -o character.out

  This creates the character.out executable. Runnint "./character.out" gets
  the same output as above.

  NOTE: I get the following warning type when doing this:

    ./base_sheet.h:26:22: warning: in-class initialization of non-static data member is a C++11 extension [-Wc++11-extensions]
        string _class_text = "NoClass";
