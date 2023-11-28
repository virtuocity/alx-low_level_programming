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

```c
    #include <fcntl.h>
    int open(const char *pathname, int flags);  
    int open(const char *pathname, int flags, mode_t mode);
```  

The open() system call opens the file specified by pathname.  If
the specified file does not exist, it may optionally (if O_CREAT
is specified in flags) be created by open().

The return value of open() is a file descriptor, a small,
nonnegative integer that is an index to an entry in the process's
table of open file descriptors.  The file descriptor is used in
subsequent system calls (read(2), write(2), lseek(2), fcntl(2),
etc.) to refer to the open file.  The file descriptor returned by
a successful call will be the lowest-numbered file descriptor not
currently open for the process.

By default, the new file descriptor is set to remain open across
an execve(2) (i.e., the FD_CLOEXEC file descriptor flag described
in fcntl(2) is initially disabled); the O_CLOEXEC flag, described
below, can be used to change this default.  The file offset is
set to the beginning of the file (see lseek(2)).

A call to open() creates a new open file description, an entry in
the system-wide table of open files.  The open file description
records the file offset and the file status flags (see below).  A
file descriptor is a reference to an open file description; this
reference is unaffected if pathname is subsequently removed or
modified to refer to a different file.  For further details on
open file descriptions, see NOTES.

The argument flags must include one of the following access
modes: O_RDONLY, O_WRONLY, or O_RDWR.  These request opening the
file read-only, write-only, or read/write, respectively.

In addition, zero or more file creation flags and file status
flags can be bitwise-or'd in flags.  The file creation flags are
O_CLOEXEC, O_CREAT, O_DIRECTORY, O_EXCL, O_NOCTTY, O_NOFOLLOW,
O_TMPFILE, and O_TRUNC.  The file status flags are all of the
remaining flags listed below.  The distinction between these two
groups of flags is that the file creation flags affect the
semantics of the open operation itself, while the file status
flags affect the semantics of subsequent I/O operations.  The
file status flags can be retrieved and (in some cases) modified;
see fcntl(2) for details.


## Resources
Read or watch:

+ [File descriptors](https://en.wikipedia.org/wiki/File_descriptor)
+ [C Programming in Linux Tutorial #024 - open() read() write() Functions](https://www.youtube.com/watch?v=e-srF6c3TJ8)

man or help:

+ [open](https://man7.org/linux/man-pages/man2/open.2.html)
+ [close](https://man7.org/linux/man-pages/man2/close.2.html)
+ [read](https://man7.org/linux/man-pages/man2/read.2.html)
+ [write](https://man7.org/linux/man-pages/man2/write.2.html)
+ [dprintf/fprintf](https://linux.die.net/man/3/fprintf)
