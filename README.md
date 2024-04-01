# Binary Trees

This project is about manipulating a binary tree, creating it, traveling through it and specifying some of its characteristics such as height, depth, nodes, and so on.
### Style
We use "Betty" coding style.

## Data structures
### - Basic Binary Tree
```
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
```

### - Binary Search Tree
```
typedef struct binary_tree_s bst_t;
```
### - AVL Tree
```
typedef struct binary_tree_s avl_t;
```
### - Max Binary Heap
```
typedef struct binary_tree_s heap_t;
```
## Print function

It will be use binary_tree_print.c that is a functions to print binary trees in a pretty way given by [papamuziko](https://github.com/hs-hq/0x1C.c).

```
                           .----------------------(006)-------.
                      .--(001)-------.                   .--(008)--.
                 .--(-02)       .--(003)-------.       (007)     (009)
       .-------(-06)          (002)       .--(005)
  .--(-08)--.                           (004)
(-09)     (-07)
```



## Task
**0. New node**
Function that creates a binary tree node.
```
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
```
**1. Insert left**
Function that inserts a node as the left-child of another node.
```
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
```
**2. Insert right**
Function that inserts a node as the right-child of another node.
```
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
```



### Instructions for use


##### Compile
In order to compile the program, we must use the following code: 

```
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c n-main.c "n-function-name".c
```
Where **n** is the number of the function to be executed.
