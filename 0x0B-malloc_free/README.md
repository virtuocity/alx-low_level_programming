# 0x0B. C - malloc, free
## Notes and thoughts
### malloc
#include <stdlib.h>  
void *malloc(size_t size); 
The void pointer in C is a pointer that is not associated with any data types.  
It points to some data location in the storage.

This means that it points to the address of variables. It is also called the  
general purpose pointer.

The malloc() function allocates size bytes and returns a pointer to the allocated
memory  
