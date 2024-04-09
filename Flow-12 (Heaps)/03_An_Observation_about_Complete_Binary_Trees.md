# Observation about Complete Binary Trees: 

- In the array representation of heap, where we're using 1 based indexing, we can observe that from index n/2 to n-1 index all the nodes are leaf nodes, and all leave nodes by default follow a heap property 

* Above, n = the size of array, where 0th index is not being used and it is filled with any random value or -1, whatever value the 0th index has, it doesn't matter to us, because we never access that index while representing the tree using 1-based indexing where the root is inserted at the index 1 