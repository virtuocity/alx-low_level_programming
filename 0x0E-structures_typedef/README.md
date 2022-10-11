# 0x0E. C - Structures, typedef
## Notes And Thoughts
A structure is a user defined data type available in C that allows to combine data items of  
different kinds. 
*NB: itis a composite data type (or record) declaration that defines a physically grouped list of  
variables under one name in a block of memory, allowing the different variables to be accessed via   
a single pointer or by the struct declared name which returns the same address.*  
You can define a structure in the global scope of your program (outside of all your functions,  
just like the functions prototypes).  
### Pointer to Structures
To access elements of a pointer to a structure, you have to dereference the pointer and then  
access to the data using the ‘.’ symbol.  
*BUT*  
There is a simple way to do that, just by using the ‘->’ symbol. This symbol is equivalent to  
dereferencing + using ‘.’  

/* Global definition */   
struct User  
{  
	char *name;  
	char *email;  
	int age;    
};  
int main(void)
{
	struct User user;//declaration  
	struct User *ptr;// pointer to structure  
  
	user.name = "Buno Woche";  
	user.email = "buno@hbtn.io";  
	user.age = 24;  

	ptr = &user;
	/* Dereferencing the pointer before accessing the data with the '.' symbol*/  
	ptr->email = "buno@hbtn.io";  
}  




