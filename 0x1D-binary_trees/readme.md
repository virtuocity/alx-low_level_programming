# 0x1D. C - Binary trees
## Resources
### Read or watch:

+ [Binary tree](https://en.wikipedia.org/wiki/Binary_tree)
+ [Data Structure and Algorithms - Tree]()
+ [Tree Traversal](https://www.programiz.com/dsa/tree-traversal)
+ [Binary Search Tree](https://en.wikipedia.org/wiki/Binary_search_tree)
+ [Data structures: Binary Tree](https://www.youtube.com/watch?v=H5JubkIy_p8)

### Basic Binary tree

    /**
    * struct binary_tree_s - Binary tree node
    *
    * @n: Integer stored in the node
    * @parent: Pointer to the parent node
    * @left: Pointer to the left child node
    * @right: Pointer to the right child node
    */
    struct binary_tree_s
    {
        int n;
        struct binary_tree_s *parent;
        struct binary_tree_s *left;
        struct binary_tree_s *right;
    };

    typedef struct binary_tree_s binary_tree_t;

### Binary Search Tree

    typedef struct binary_tree_s bst_t;

