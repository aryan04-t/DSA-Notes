/*



# What does Heapify means?? 

1. Heapify refers to the process of converting a "binary tree" or an "array" into a "heap". 
2. Heapify typically involves rearranging the elements in the tree such that the heap property is satisfied. 
3. This operation is commonly used in algorithms like heap sort, priority queue implementations, and various graph algorithms. 



# Before studying heapify let's understand "siftUp" and "siftDown" operations: 

--> The algorithm that we used while inserting a node into the heap, in that algorithm the main functionality of making the newly inserted node value reach its correct place by making it move upward in the tree is called "siftUp" opertion. 

--> The algorithm that we used while deleting a node from the heap, in that algorithm the main functionality of making the new root node value reach its correct position by making it move downward in the tree is called "siftDown" operation. 



# Note: 

- So, we can use "siftUp" or "siftDown" any one of these two operations to implement heapify function, and then this heapify function can be used to build the heap. 

- Now we know that heapify function can be implemented using any operation "siftUp" or "siftDown", but the complexity of heapify() function will be different if it is implemented using "siftUp" operation and its complexity will be different when it is implemented using "shiftDown" operation. 



# Let's understand how to implement buildHeap function or we can say let's understand how to covert an array into a heap: 


$ We will also check out the time complexity of buildHeap function, and we will see that how its time complexity changes when we use "siftUp based heapify" and "siftDown based heapify" function for implementing buildHeap function: 


    1. Top-Down Build Heap Approach:

        - So, when we use siftUp operation to implement heapify function, so that we can build a heap by using this heapify function. 
        - We basically start from the left child of the root node and we keep applying heapify function to all the nodes, and like this we apply siftUp based heapify function to all the nodes starting from the root node and like this the array becomes a heap. (We do not apply siftUp based heapify function to the root node because root node can never be sifted up as it does not have any parent) 

        - Time complexity of this approach is O(n * log(n)) 

        $ Let's break down that why the buildHeap function will have a time complexity of O(n * log(n)) when the heapify function which we're using is implemented using the siftUp operation: 
            - We're assuming a perfect binary tree here for worst case time complexity analysis of buildHeap function's time complexity 
            - When n = the total number of nodes in the tree and h = log(n) represent the height of the heap. 
            - Then the work required for the siftUp approach is given by this sum: 
                (h * (n+1)/2) + ((h-1) * (n+1)/4) + ((h-2) * (n+1)/8) + ... + (0 * 1) 
            - n/2 nodes which are present in the last level of the tree, and all these node values have to travel the full height of the tree in the worst case when we're implementing siftUp operation to implement heapify function, and the one and only root node has to travel 0 distance in worst case when the siftUp operation is used to implement the heapify function, and then when we're using this siftUp operation based heapify function to implement buildHeap function, our buildHeap function's time complexity becomes O(n * log(n)) 


    2. Bottom-Up Build Heap Approach: 

        - So, when we use siftDown operation to implement heapify function, so that we can build a heap by using this heapify function. 
        - We basically use our brain, and check the fact that all leaf nodes are already a heap in themselves, and we don't have to implement heapify function on them, that's why we start implementing siftDown based heapify function from the 1st non-leaf node, and then we one by one keep implementing heapify function to all the nodes until we reach the root node, and then by applying the heapify to root node we finish the process of building a heap from an array. 

        - Time complextiy of this approach is O(n) 

        $ Let's break down that why the buildHeap function will have a time complexity of O(n) when the heapify function which has been used is implemented using the siftDown operation: 
            - When n = the total number of nodes in the tree and h = log(n) represent the height of the heap. 
            - Then the work required for the siftDown approach is given by this sum: 
                (0 * (n+1)/2) + (1 * (n+1)/4) + (2 * (n+1)/8) + ... + (h * 1) 
            - We're assuming a perfect binary tree here for worst case analysis of buildHeap function's time complexity 
            - n/2 nodes which are present in the last level of the tree, all these nodes have to travel 0 distance for getting heapified and that's why we skip heapify them, and we start heapify from the 1st non-leaf node and only 1 root node has the worst case time complexity of moving downwards whole height of the tree.
            - That's why when we siftDown based heapify function in our buildHeap function, we basically take advantage of tree's structure and like this we're able to keep the most costliest work for the one and only root node, and the cheapest work for the most of the nodes which are present in the bottom of the tree, and that's why the time complexity of our buildHeap function turns out to be O(n) when the heapify function is implemented using siftDown approach 

        --> And using this equation (0 * (n+1)/2) + (1 * (n+1)/4) + (2 * (n+1)/8) + ... + (h * 1), you derive that the complexity of the buildHeap funciton is O(n) when it uses the siftDown based heapify function 

        $ Exact proof of how above equation can be deduced in the term of just "n" and constants is a little difficult mathematically proof, deducing above equation into just in the term of one "n" and just constants will require knowledge of some advanced mathematics, but if you still want to see one way of deducing above equation into the term of just one "n" and constants and if you want to understand above topics even nicely then you can refer to this "StackOverflow" answer which is written by "Jeremy West": https://stackoverflow.com/questions/9755721/how-can-building-a-heap-be-on-time-complexity 

        --> I took reference from Jeremy's answer to understand the above concept in depth and I loved his answer, his answer was really informative, descriptive and intuitive, hats off to Jeremy for providing such great insight into the implementation of buildHeap function and time complexity of buildHeap function. 
        


# Conclusion: 

--> siftDown is the most preffered operation for implementing heapify function, and then using this heapify function the only approach that you can implement is the bottom-up approach for building heap, and the bottom-up approach is the most preffered approach for implementing "build heap from an array" function because it has a time complexity of O(n) 



*/