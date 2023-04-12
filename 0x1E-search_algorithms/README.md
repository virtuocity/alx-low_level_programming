# 0x1E. C - Search Algorithms

## Notes
a **search algorithm** is an algorithm designed to solve a search problem. Search algorithms work to retrieve information stored within particular *data structure*, or calculated in the *search space* of a *problem domain*, with either *discrete or continuous values*.

Specific applications of search algorithms include:

+ Problems in [combinatorial optimization](https://en.wikipedia.org/wiki/Combinatorial_optimization), such as:
    + The [vehicle routing](https://en.wikipedia.org/wiki/Vehicle_routing_problem) problem, a form of [shortest path](https://en.wikipedia.org/wiki/Shortest_path_problem) problem
    + The [knapsack problem](https://en.wikipedia.org/wiki/Knapsack_problem): Given a set of items, each with a weight and a value, determine the number of each item to include in a collection so that the total weight is less than or equal to a given limit and the total value is as large as possible.
    + The [nurse scheduling problem](https://en.wikipedia.org/wiki/Nurse_scheduling_problem)
+ Problems in [constraint satisfaction](https://en.wikipedia.org/wiki/Constraint_satisfaction), such as:
    + The [map coloring problem](https://en.wikipedia.org/wiki/Map_coloring_problem)
    + Filling in a [sudoku]() or crossword puzzle
+ In [game theory](https://en.wikipedia.org/wiki/Game_theory) and especially combinatorial game theory, choosing the best move to make next (such as with the minmax algorithm)
+ Finding a combination or password from the whole set of possibilities
+ Factoring an integer (an important problem in cryptography)
+ Optimizing an industrial process, such as a chemical reaction, by changing the parameters of the process (like temperature, pressure, and pH)
+ Retrieving a record from a database
+ Finding the maximum or minimum value in a list or array
+ Checking to see if a given value is present in a set of values

### What does ‘Space Complexity’ mean?
The space Complexity of an algorithm is the total space taken by the algorithm with respect to the input size. Space complexity includes both Auxiliary space and space used by input. 

This space is with respect to amount of RAM(memory) assigned to variables, functions etc in the runtime of an algorithm. 

Auxiliary Space is the extra space or temporary space used by an algorithm.

In recursive calls stack space also counts. 
### Binary Search
**Problem:** Given a sorted array arr[] of n elements, write a function to search a given element x in arr[] and return the index of x in the array. Consider array is 0 base index.

    Input: arr[] = {10, 20, 30, 50, 60, 80, 110, 130, 140, 170}, x = 110
    Output: 6
    Explanation: Element x is present at index 6.

*Binary Search* is a searching algorithm used in a sorted array by repeatedly dividing the search interval in half. The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(Log n). 

### Pseudicode
+ Sort the array in ascending order.
+ Set the low index to the first element of the array and the high index to the last element.
+ Set the middle index to the average of the low and high indices.
+ If the element at the middle index is the target element, return the middle index.
+ If the target element is less than the element at the middle index, set the high index to the middle index – 1.
+ If the target element is greater than the element at the middle index, set the low index to the middle index + 1.
+ Repeat steps 3-6 until the element is found or it is clear that the element is not present in the array.

Binary Search Algorithm can be implemented in the following two ways:  
+ Iterative Method
+ Recursive Method

1. Iteration Method

    binarySearch(arr, x, low, high)  
        repeat till low = high  
                mid = (low + high)/2  
                    if (x == arr[mid])  
                    return mid  
                    else if (x > arr[mid]) // x is on the right side  
                        low = mid + 1  
                    else                  // x is on the left side  
                        high = mid - 1  
## Resources
### Read or watch:

+ [Search algorithm](https://en.wikipedia.org/wiki/Search_algorithm)
+ [Space complexity](https://www.geeksforgeeks.org/g-fact-86/)
+ [Linear Search](https://en.wikipedia.org/wiki/Linear_search)
+ [Jenny's Linear Search Algorithm | Linear Search in C ](https://www.youtube.com/watch?v=C46QfTjVCNU)
+ [Jenny's Lectures | Binary Search Algorithm](https://www.youtube.com/watch?v=V_T5NuccwRA)