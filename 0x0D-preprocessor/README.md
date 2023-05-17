# 0x0D. C - Preprocessor  
## Notes And Thoughts
### C Program Compilation Processes
+ Preprocessing  
Preprocessor tool helps in comments removal, macros expansion (what are macros?- are constants), file inclusion,
File inclusion -  is the addition of another file containing some pre-written code into our C Program during  
the pre-processing. It is done using the #include directive. File inclusion during pre-processing causes the  
entire content of filename to be added in the source code, replacing the #include<filename> directive  

Macros are some constant values or expressions defined using the #define directives in C Language. A macro call  
leads to macro expansion. Matching tokens - pre-writen assembly level instructions replace macros  

	#define G 9.8
	#define SUM(a,b) (a + b)  
You can use a macro like a function:  

	#define SQR(X) X*X  
	int n = SQR(10);  

There are predeined system macros such as _FILE_ _TIME_ _DATE_ _STDC_  
In static linking , entire object files are included whereas in dynamic linking ,only the address in memory of  
the loaded DLL is included thus reducing exe file size.   

## Tasks

## Links 
+ https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Macro-Arguments.html#Macro-Arguments  
+ https://www.scaler.com/topics/c/compilation-process-in-c/  
+ https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Object-like-Macros.html#Object-like-Macros  
+ https://www.youtube.com/watch?v=X6HiYbY3Uak&ab_channel=BestDotNetTraining   
+ [Most important for Preprocessors--directives, constants, and macros](https://www.cprogramming.com/tutorial/cpreprocessor.html)
