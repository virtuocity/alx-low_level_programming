# 0x15. C - File I/O 

## Notes 
In Unix and Unix-like computer operating systems, a file descriptor (FD, less frequently fildes) is a process-unique  
identifier (handle) for a file or other input/output resource, such as a pipe or network socket.  
File descriptors typically have non-negative integer values, with negative values being reserved to indicate "no value"  
or error conditions.  
File descriptors are a part of the POSIX API. Each Unix process (except perhaps daemons) should have three standard POSIX  
file descriptors, corresponding to the three standard streams:  
+ Standard input STDIN_FILENO  
+ Standard output STDOUT_FILENO  
+ Standard Error STDERR_FILENO  
To perform input or output, the process passes the file descriptor to the kernel through a system call, and the kernel  
will access the file on behalf of the process. The process does not have direct access to the file or inode tables.  
### Open() function
+ Synopsis
#include <sys/stat.h>
#include <fcntl.h>

*int open(const char *path, int oflag, ... );*  

 shall establish the connection between a file and a file descriptor. It shall create an open file description that refers  
 to a file and a file descriptor that refers to that open file description.  
The *path* argument points to a pathname naming the file.The file status flags and file access modes of the open file description  
 shall be set according to the value of *oflag*.


## Links
https://en.wikipedia.org/wiki/File_descriptor  
https://www.youtube.com/watch?v=dP3N8g7h8gY&ab_channel=ShellWave  

