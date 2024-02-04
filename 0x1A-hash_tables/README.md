# 0x1A. C - Hash tables
## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General
What is a hash function  
What makes a good hash function  
What is a hash table, how do they work and how to use them  
What is a collision and what are the main ways of dealing with collisions in the context of a hash table  
What are the advantages and drawbacks of using hash tables  
What are the most common use cases of hash tables  

## Resources
### Read or watch:

+ [What is a HashTable Data Structure - Introduction to Hash Tables , Part 0](https://www.youtube.com/watch?v=MfhjkfocRR0)
+ [Hash Function - Wikipedia](https://en.wikipedia.org/wiki/Hash_function)
+ [Hash Tables - CS50 Shorts](https://www.youtube.com/watch?v=nvzVHwrrub0 )
+ [Hash table](https://en.wikipedia.org/wiki/Hash_table)
+ [All about hash tables](https://www.digitalocean.com/community/tutorials/hash-table-in-c-plus-plus)
+ [Hash Tables and Hash Function](https://www.youtube.com/watch?v=KyUTuwz_b7Q  )
+ [why hash tables and not arrays](https://stackoverflow.com/questions/31930046/what-is-a-hash-table-and-how-do-you-make-it-in-c)
 
## Notes and Thoughts
A hash table is  a data structure that is used to store information. IN key - value pairs form. It is implemented using arrays and linked lists(when chaining). Key-value pairs can be , for example, a person's name and his/her phone number.  
Mapping of key-value pairs is done using a hash function.
The *Hash function* looks at a key and spits out what index it's going to store the info(key or value, or both??)  


    hash(key) -> index


