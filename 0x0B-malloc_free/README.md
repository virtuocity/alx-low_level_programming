# 0x0B. C - malloc, free
## Notes and thoughts
### malloc  
prototype: void * malloc(size_t size);  
void *- the void pointer in C is a pointer that is not associated with any data types.It points to some data  
location in the storage.This means that it points to the address of variables. It is also called the general  
purpose pointer.  

The malloc() function allocates size bytes and returns a pointer to the allocated
memory 
char * arr = NULL;  
**ALWAYS INITIALISE ARRAY TO NULL AND OTHER VARS TOO-GOOD CODING PRACTISE**
## TASKS
### 0. Write a function that creates an array of chars, and initializes it with a specific char.
1.Prototype: char *create_array(unsigned int size, char c);  
2.Returns NULL if size = 0  
3.Returns a pointer to the array, or NULL if it fails 

