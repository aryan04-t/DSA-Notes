# Heaps: 

- Heap is a data structure which is always a "complete binary tree", and it holds a "heap property" 

- So, heap is basically a special type of tree, just like "Binary Search Trees" were special types of trees which hold a "Binary Search Property" like: every node smaller than the current node goes to the left of current node and every node greater than the current node goes to its right, just like that heaps also have a unique heap property and we will look into it ahead 



# Revising what is a Complete Binary Tree: 

- In a complete binary tree all levels are completely filled except the last one 
- And all the levels are filled only left to right 

> ### Note: 
> 1. Full binary tree in which all the nodes have either 0 or 2 child 
> 2. Perfect binary tree is a binary tree where all the levels are filled completely, means every node has 2 child except the leave nodes, and all the leave nodes should exist in the last level  



# The 2 Heap Properties are: 

1. Max Heap 
    - In max heap every node has a value which is always larger than all the values which are present below it 

2. Min Heap 
    - In min heap all the values which are present below the current are smaller than the value of current node 

> ### Note:  
> In heap there is no relation between left and right child of the node, the left child should be smaller than parent in Max heap and right child should also be smaller than the parent in Max Heap, that's it, left child can be greater than right, right can be greater than left, it doesn't matter. 



# Representing Heap as an Array: 

- Represent tree in the form of array 
- Do 0 based or 1 based indexing, whatever you like  
- And once you decide which indexing you're going to use, now derive the formulas for indexing which will let you access parent and child of the current node whose index you have 



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


### # Algorithm for insertion in Heap: 

- Take the new data value, push it to the back of array 
- Now get current value's index in the tree and until the parent of current value is smaller then the current value, keep swapping the child and the parent and make the new inserted value reach its desired place so that the property of max heap stays satisfied 

> Time complexity of insertion in heap is O(h)
> But because heap is always a complete binary tree, and a skewed tree can never be formed, that's why "h" can never be equal to "n"
> So, Time Complexity = 

|  Worst Case  |  Average Case  |   Best Case   | 
|:------------:|:--------------:|:-------------:| 
|     O(1)     |    O(log(n))   |   O(log(n))   | 


the worst-case, average-case and best-case all the time complexities of insertion in a heap becomes O(log(n) to the base 2) 

> Binary search time complexity derivation can derive this complexity 



# Deletion in Max Heap: 

> In a Max Heap you can only delete the head of the heap, the most maximum value which is present in the heap 


### # Algorithm for deletion: 

> I am using 1 based indexing here, the root is stored at 1st index in the array 

- Swap the value which is present at 1st index with the value which is present at the last index of array 
- Remove the last element of array, if you're using vector, do pop_back(), if using a dynamic array, just decrease its size 
- Now make the root node reach its correct place, compare the children with the root node and keep swapping until the data reaches its correct position 

> Overall time complexity of deletion in heap in all cases is O(log(n)) 

|   Worst Case  |  Average Case  |   Best Case   | 
|:-------------:|:--------------:|:-------------:| 
|   O(log(n))   |    O(log(n))   |   O(log(n))   | 