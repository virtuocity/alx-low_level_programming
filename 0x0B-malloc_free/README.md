# 0x0B. C - malloc, free
## Notes and thoughts
### malloc  
prototype: void * malloc(size_t size);  
**void** *- the void pointer in C is a pointer that is not associated with any data types.It points to some data  
location in the storage.This means that it points to the address of variables. It is also called the general  
purpose pointer.  

The malloc() function allocates size bytes and returns a pointer to the allocated memory. This memory will have  
read and write permissions.  

	char * arr = NULL;  

**ALWAYS INITIALISE ARRAY TO NULL AND OTHER VARS TOO-GOOD CODING PRACTISE**  
	
	char *s = "HOLBERTON";// is read-only i.e is immutable  
	char s[] = "Holberton"; // is mutable  

The array s holds a copy of the string "Holberton". So it is possible to modify this copy.  
The free function frees the memory space which have been allocated by a previous call to malloc  
  
+ Prototype: void free(void *ptr);  
+ where ptr is the address of the memory space previously allocated by and returned by a call to malloc  



## TASKS
### 0. Write a function that creates an array of chars, and initializes it with a specific char.
+ Prototype: char *create_array(unsigned int size, char c);  
+ Returns NULL if size = 0  
+ Returns a pointer to the array, or NULL if it fails 
### 1.Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the  
### string given as a parameter.  
+ Prototype: char *_strdup(char *str);  
+ The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for 
the new string is obtained with malloc, and can be freed with free.  
+ Returns NULL if str = NULL  
+ On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient  
memory was available
### 2. Write a function that concatenates two strings
+ Prototype: char *str_concat(char *s1, char *s2);
+ The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed  
by the contents of s2, and null terminated.
+ if NULL is passed, treat it as an empty string
+ The function should return NULL on failure  
### 3.Write a function that returns a pointer to a 2 dimensional array of integers.  
+ Prototype: int **alloc_grid(int width, int height);
+ Each element of the grid should be initialized to 0
+ The function should return NULL on failure
+ If width or height is 0 or negative, return NULL
## Links
https://alx-intranet.hbtn.io/projects/222  
https://man7.org/linux/man-pages/man3/strdup.3.html  
https://www.youtube.com/watch?v=xDVC3wKjS64  
It is very important to watch previous video from above UTube channel in order to understand memory allocation  
better. Link provided below:  
https://www.youtube.com/watch?v=_8-ht2AKyH4&t=29s&ab_channel=mycodeschool  
How to dynamically allocate a 2D array in C?  
https://www.geeksforgeeks.org/dynamically-allocate-2d-array-c/
