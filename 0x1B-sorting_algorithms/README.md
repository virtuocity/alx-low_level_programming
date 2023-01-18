# 0x1B. C - Sorting algorithms & Big O

## Notes
a sorting algorithm is an algorithm that puts elements of a list into an order.  
The most frequently used orders are *numerical* order and *lexicographical* order, and either ascending or descending. Efficient sorting is important for optimizing the efficiency of other algorithms (such as search and merge algorithms) that require input data to be in sorted lists. Sorting is also often useful for canonicalizing data and for producing human-readable output.  
For optimum efficiency, the input data should be stored in a data structure which allows random access rather than one that allows only sequential access.  
### Big O Notation
Big Oh notation is a relative representation of the complexity of an algorithm.  
+ relative: you can only compare apples to apples. You can't compare an algorithm that does arithmetic multiplication to an algorithm that sorts a list of integers. But a comparison of two algorithms to do arithmetic operations (one multiplication, one addition) will tell you something meaningful;
+ representation: BigOh (in its simplest form) reduces the comparison between algorithms to a single variable. That variable is chosen based on observations or assumptions. For example, sorting algorithms are typically compared based on comparison operations (comparing two nodes to determine their relative ordering). This assumes that comparison is expensive. But what if the comparison is cheap but swapping is expensive? It changes the comparison; and 
+ complexity: if it takes me one second to sort 10,000 elements, how long will it take me to sort one million? Complexity in this instance is a relative measure to something else.
## Links
+ Sorting Algorithm  
https://en.wikipedia.org/wiki/Sorting_algorithm  
+ Big O Notation  
https://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation  
+ All about sorting algorithms  
https://www.geeksforgeeks.org/sorting-algorithms/  
+ CS50 Algorithms explanation in detail by David Malan  
https://www.youtube.com/watch?v=yb0PY3LX2x8&t=2s  
+ Computational complexity of Fibonacci Sequence
https://stackoverflow.com/questions/360748/computational-complexity-of-fibonacci-sequence  