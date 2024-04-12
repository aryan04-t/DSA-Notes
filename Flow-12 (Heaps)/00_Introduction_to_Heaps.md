# Heaps: 

- Heap is a data structure which is always a "complete binary tree", and it holds a "heap property" 

- This complete binary tree based heap is also called a "Binary Heap" 

- So, heap is basically a special type of tree, just like "Binary Search Trees", BSTs were special types of trees which held a "Binary Search Property": every node smaller than the current node goes to the left of current node and every node greater than the current node goes to its right, just like that heaps also have a unique heap property and we will look into it ahead 



# Revising what is a Complete Binary Tree: 

- In a complete binary tree all levels are completely filled except the last one 
- And all the levels are filled only left to right 

> ### Note: 
> 1. Full binary tree is a tree in which all the nodes have either 0 or 2 child 
> 2. Perfect binary tree is a binary tree where all the levels are filled completely, means every node has 2 child except the leave nodes, and all the leave nodes should exist in the last level 



# There are 2 Types of Unique Heap Properties, and Based on these 2 properties we have 2 Types of Heaps: 

1. Max Heap: 
    - You can define max heap from 2 perspectives, the parent perspective and the child perspective: 
        (i) Parent's Perspective Definition: 
            - Every node i in a max heap except the leaf nodes should have a value greater than or equal to the value of its children 
        (ii) Child's Perspective Definition: 
            - Every node i in a max heap other than the root node has a value which is less than or equal to the value of its parent node 
    ```This means that the maximum element is always present at the root node of the max heap.``` 
    
2. Min Heap: 
    - You can also give definition of min heap from both the perspectives: 
        (i) Parent's Perspective Definition: 
            - Every node i in a min heap expect the leaf nodes should have a value which is greater than or equal to the value of its children 
        (ii) Child's Perspective Definition: 
            - Every node i in a min heap other than the root node has a value which is greater than or equal to the value of its parent node 
    ```This means that the minimum element is always present at the root node of the min heap.``` 


> ### Note: 
> 1. In a heap, whether it's a binary max heap or a binary min heap, the only relationship that matters is between each node and its parent.  
> 2. The relationship between left and right children of a node in a heap is not directly specified by the heap property. This means that there's no inherent requirement for the left child to be greater or smaller than the right child, or vice versa. Instead, the only requirement is that the children satisfy the heap property relative to their parent, or vice versa. 



# Representing Heap as an Array: 

- Represent tree in the form of array 
- Do 0 based or 1 based indexing, whatever you like  
- And once you decide which indexing you're going to use, now derive the formulas for indexing which will let you access parent and child of the current node whose index you have 



# Why are we representing heap in the form of an array instead of a tree: 

1. Storing a heap as an array requires less memory overhead compared to using a linked structure like a tree. In an array, you only need to store the values of the nodes, while in a linked structure, you also need pointers or references to link the nodes together. 

2. Time complexity wise arrays allow for constant-time access to parent and child nodes, which is crucial for efficient heap operations. With proper indexing, you can directly access the parent, left child, and right child of any node using simple arithmetic operations. This makes operations like inserting, deleting, and heapifying elements much more efficient compared to traversing a linked structure to find these relationships. 



# Indexing Formulas to Access Child or Parent of a Node: 

1. While representing a tree in the form of array, when you're starting to store root from 0th index: 
    - Index of left child = 2*i + 1 
    - Index of right child = 2*i + 2 
    - Index of any child's parent node = (i-1)/2 

2. When we start storing root from 1st index: 
    - Index of left child = 2*i 
    - Index of right child = 2*i + 1 
    - Parent child's index = i/2 

> Above i is the index of the current node whose child or parent you want to access 



# Insertion in Max Heap: 

> I am using 1 based indexing here, the root is stored at 1st index in the array 


### # Algorithm for insertion in a Max Heap: 

- Take the new data value, push it to the back of array 
- Now get current value's index in the tree and until the parent of current value is smaller then the current value, keep swapping the child and the parent and make the new inserted value reach its desired place so that the property of max heap stays satisfied 

> Time complexity of insertion in heap is O(h)
> But because heap is always a complete binary tree, and a skewed tree can never be formed, that's why "h" can never be equal to "n" 
> So, Time Complexity = 

|  Worst Case  |  Average Case  |   Best Case   | 
|:------------:|:--------------:|:-------------:| 
|     O(1)     |    O(log(n))   |   O(log(n))   | 


the worst-case time complexity of insertion in a heap becomes O(log(n) to the base 2) 

> Binary search time complexity derivation can derive this complexity 



# Deletion in Max Heap: 

> In a Max Heap you can only delete the head of the heap, the most maximum value which is present in the heap 


### # Algorithm for deletion in a Max Heap: 

> I am using 1 based indexing here, the root is stored at 1st index in the array 

- Swap the value which is present at 1st index with the value which is present at the last index of array 
- Remove the last element of array, if you're using vector, do pop_back(), if using a dynamic array, just decrease its size 
- Now make the root node reach its correct place, compare the children with the root node and keep swapping until the data reaches its correct position 

> Overall time complexity of deletion in heap in all cases is O(log(n)) 

|   Worst Case  |  Average Case  |   Best Case   | 
|:-------------:|:--------------:|:-------------:| 
|   O(log(n))   |    O(log(n))   |   O(log(n))   | 



> # By observing above max heap's insertion and deletion algorithm, you can write min heap's insertion and deletion algorithm on your own by just changing the node swapping condition 