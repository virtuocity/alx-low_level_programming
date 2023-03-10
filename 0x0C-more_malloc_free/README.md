# 0x0C. C - More malloc, free
## Notes
### strlen() and sizeof() unary operator
If I want to copy the string “Best School” into a new space in memory, I can use this statement to reserve enough space for it (select all valid answers):  

+ malloc(sizeof(“Best School”))
+ malloc(strlen(“Best School”) + 1)
+ malloc(12)
### man exit(3)
exit - cause normal process termination.  

	#include <stdlib.h>
	noreturn void exit(int status);

 The exit() function causes normal process termination and the least significant byte of status (i.e., status & 0xFF) is returned to the parent.  

### Synopsis

	#include <stdlib.h>

	void *malloc(size_t size);
	void free(void *ptr);
	void *calloc(size_t nmemb, size_t size);
	void *realloc(void *ptr, size_t size);
### Description
*The malloc()* function allocates size bytes and returns a pointer to the allocated memory. The memory is not initialized. If size is 0, then malloc() returns either NULL, or a unique pointer value that can later be successfully passed to free().

*The free()* function frees the memory space pointed to by ptr, which must have been returned by a previous call to malloc(), calloc() or realloc(). Otherwise, or if free(ptr) has already been called before, undefined behavior occurs. If ptr is NULL, no operation is performed.

*The calloc()* function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory. The memory is set to zero. If nmemb or size is 0, then calloc() returns either NULL, or a unique pointer value that can later be successfully passed to free().

*The realloc()* function changes the size of the memory block pointed to by ptr to size bytes. The contents will be unchanged in the range from the start of the region up to the minimum of the old and new sizes. If the new size is larger than the old size, the added memory will not be initialized. If ptr is NULL, then the call is equivalent to malloc(size), for all values of size; if size is equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr). Unless ptr is NULL, it must have been returned by an earlier call to malloc(), calloc() or realloc(). If the area pointed to was moved, a free(ptr) is done.

### Return Value
The malloc() and calloc() functions return a pointer to the allocated memory that is suitably aligned for any kind of variable. On error, these functions return NULL. NULL may also be returned by a successful call to malloc() with a size of zero, or by a successful call to calloc() with nmemb or size equal to zero.

The free() function returns no value.

The realloc() function returns a pointer to the newly allocated memory, which is suitably aligned for any kind of variable and may be different from ptr, or NULL if the request fails. If size was equal to 0, either NULL or a pointer suitable to be passed to free() is returned. If realloc() fails the original block is left untouched; it is not freed or moved.
## Links
man or help:

+ [exit (3)](https://man7.org/linux/man-pages/man3/exit.3.html)
+ [calloc](https://man7.org/linux/man-pages/man3/calloc.3p.html)
+ [realloc](https://linux.die.net/man/3/realloc)
