# 0x18.. C - Dynamic libraries
## Notes and Thoughts
A library is a file containing several object files, that can be used as a single entity in a
linking phase of a program.
two kinds of libraries - static libraries and shared (or dynamic) libraries.
Static libraries are just collections of object files that are linked into the program during
the linking phase of compilation, and are not relevant during runtime.
Dyynamic libraries - during compile time, the linker verifies that all the symbols (again, functions,
variables and the like) required by the program, are either linked into the program, or in one of its 
shared libraries. However, the object files from the dynamic library are not inserted into 
the executable file. Instead, when the program is started, a program in the system (called a dynamic 
loader) checks out which shared libraries were linked with the program, loads them to memory, and attaches
them to the copy of the program in memory.

*Linker*
A linker is a command that combines several pieces of a program together and reorganizes the memory allocation for them.  
The functions of a linker include:  

+ Integrating all the pieces of a program
+ Figuring out a new memory organization so that all the pieces fit together
+ Reviving addresses so that the program can run under the new memory organization
+ Resolving symbolic references
