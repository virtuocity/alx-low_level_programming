# 0x0F. C - Function pointers
## Notes and Thoughts

	```c
	#include <stdio.h>  
	// A normal function with an int parameter  
	// and void return type  
	void fun(int a)  
	{  
    		printf("Value of a is %d\n", a);  
	}  
  
	int main()  
	{  
    		// fun_ptr is a pointer to function fun()   
    		void (*fun_ptr)(int) = &fun;  
  
    		/* The above line is equivalent of following two  
       		void (*fun_ptr)(int);  
       		fun_ptr = &fun;   
    		*/  
  
    		// Invoking fun() using fun_ptr  
    		(*fun_ptr)(10);  
    
    		return 0;  
	}  
	```

*Following are some interesting facts about function pointers.*  

+ Unlike normal pointers, a function pointer points to code, not data. Typically a function pointer  
 stores the start of executable code.  
+ Unlike normal pointers, we do not allocate de-allocate memory using function pointers.  
+ A function’s name can also be used to get functions’ address.  
+ Like normal data pointers, a function pointer can be passed as an argument and can also be returned  
 from a function.  
### Why pointers to functions?
## Tasks

## Resources
### Read or watch:
+ [Function Pointer in C](https://www.geeksforgeeks.org/function-pointer-in-c/)  
+ [Pointers to functions](https://publications.gbdirect.co.uk//c_book/chapter5/function_pointers.html)
* [Function Pointers in C / C++](https://www.youtube.com/watch?v=ynYtgGUNelE)
* [why pointers to functions?](https://www.youtube.com/watch?v=sxTFSDAZM8s)
* [Everything you need to know about pointers in C ](https://boredzo.org/pointers/)  
