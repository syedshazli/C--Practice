I've used Makefiles in the past for systems programming, but haven't used them since.
I'd like to get back in the groove of creating Cpp files compiling w/multiple files, so following a makefile tutorial 
@ makefiletutorial.com should suffice


NOTES:

So why do makefiles exist?
*Help us decide what parts of a large program need to be recompiled
*So a main.cpp can call functions from file1.cpp and file2.cpp, which have file1.h and file2.h respectivley
*goal: compile whateevr files need to be compiled, based on what files have changed


Makefile Syntax:

targets: prerequisites
    command
    command
    command

targets: these are filenames
commands: series of steps used to make the targets (start with tab)
prereqs AKA dependencies: file names, need to exist before commands for targets are run

As seen in the blah:blah.c example, the makefile attempts to device if the prereqs of blah have changed since last compiled
If blah.c was modified, running make recompiles
If blah.c was not changed, then it should not recompile
If 'blah' the executable is removed, then running make recompiles