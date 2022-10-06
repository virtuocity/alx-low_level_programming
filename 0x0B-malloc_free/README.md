# 0x0B. C - malloc, free
## Notes and thoughts
### malloc  
prototype: void * malloc(size_t size);  
**void * **- the void pointer in C is a pointer that is not associated with any data types.It points to some data  
location in the storage.This means that it points to the address of variables. It is also called the general  
purpose pointer.  

The malloc() function allocates size bytes and returns a pointer to the allocated
memory 
char * arr = NULL;  
**ALWAYS INITIALISE ARRAY TO NULL AND OTHER VARS TOO-GOOD CODING PRACTISE**
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
## Links
https://alx-intranet.hbtn.io/projects/222  
https://man7.org/linux/man-pages/man3/strdup.3.html  
https://www.youtube.com/watch?v=xDVC3wKjS64  
It is very important to watch previous video from above UTube channel in order to understand memory allocation  
better. Link provided below:  
https://www.youtube.com/watch?v=_8-ht2AKyH4&t=29s&ab_channel=mycodeschool  
