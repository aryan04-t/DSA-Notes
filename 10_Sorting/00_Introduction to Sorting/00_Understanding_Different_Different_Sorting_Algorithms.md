# What is Sorting? 


- Sorting is the process of arranging elements in a specific order, usually in ascending or descending order. 





# Different Different Sorting Algorithms (All these below written algorithms are for Ascending Order Sort): 


1. Selection Sort: 
    - Pick the minimum element, and make it reach its right place. 
    - Sorted array is formed on the left side of array. 


2. Bubble Sort: 
    - Start from 0th index and keep swapping and make the maximum element reach its right place. 
    - Sorted array is built on the right side of the array. 
    - Bubble Sort can be optimized by using a boolean flag, if no swaps happened in one complete cycle of inner loop, it means the array got completely sorted. 


3. Insertion Sort: 
    - Sorted array is built on the left side of the array. 
    - You start from 1st element, and you keep finding the right place for the current element in its left side, and until you don't find a right place, you keep shifting the elements and once you find the correct place, you insert the current element there. 


4. Merge Sort: 
    - Just keep diving the array logically using a mid variable, and by using recursion reach the logical size of 1 array, and now from there, start merging the arrays one by one bottom to up by taking the advantage of fact that an array with single element is considered sorted. 


5. Quick Sort: 
    - Quick sort uses partition logic, just write the partition logic, where you select the pivot element, and then you make the pivot element reach its correct place by counting the number of elements which are smaller than equal to our pivot element. 
    - And now once you make the pivot element reach its correct place, just make sure that all the elements which are smaller than or equal to the pivot are present on the right side of pivot and all the elements which are greater than the pivot are present on the right side of the pivot. 
    - Once you have performed the complete partitioning logic, return the pivot index, and now left the main function make recursive call for sorting the left and right half of the pivot. 


6. Heap Sort: 
    - Just build heap inside the array using the bottom-up siftDown based build heap approach (Build a Max Heap for Ascending Order Sort). 
    - And then keep picking up the 0th index element and keep swapping it with the last unsorted index of the array, and perform the heapify on the 0th index to convert the broken heap once again into a heap. 
    - The sorted array is formed on the right side of the array. 