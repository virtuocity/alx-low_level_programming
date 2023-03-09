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
## Links
man or help:

+ [exit (3)](https://man7.org/linux/man-pages/man3/exit.3.html)
+ [calloc](https://man7.org/linux/man-pages/man3/calloc.3p.html)
+ [realloc](https://linux.die.net/man/3/realloc)
