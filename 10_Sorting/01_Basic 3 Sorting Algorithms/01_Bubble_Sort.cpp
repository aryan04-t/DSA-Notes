/*

# Bubble Sort: 

@ Ascending Order Bubble Sort Algorithm: 

    --> In bubble sort we to make the most largest element of the current unsorted array reach its correct place by just swapping with the adjacent elements 
    --> Sorted array is formed at the end of the array, it means on the right hand side
    
    1. Start with an unsorted array of elements.
    2. Initialize a variable 'n' to the length of the array. 
    3. Outer loop which has loop control variable (i), it run n-1 time, i starts from 0 and goes till n-2 index, because if we place n-1 largest elements of the array at there right places then the nth largest element aka (also known as) the smallest element of the array will be placed at its right place on it own when this whole process will be completed 
        3.1 Inner loop has a loop control variable j, and the inner loop traverses the whole unsorted array from 0th index to (n-i-1)th index, and while traversing the largest element is made to reach its correct place:
             i. Compare the j-th and (j+1)-th elements.
            ii. If the j-th element is greater than the (j+1)-th element, swap them.
    4. When the above mentioned nested loops will end, our array will be completely sorted in ascending order. 

*/



/*


# Best Case Time Complexity of Bubble Sort can be Optimized and it can become O(n) from O(n^2) Just by Understanding the Common Observation: 

* Note: This observation is written with respect to the "Ascending Order Bubble Sort", obviously it is applicable to the "Descending Order Bubble Sort" also, but the if statement condition will be flipped that's it. 

- If the inner loop completed its all the iteration and the if statement inside the inner loop never got executed even once in that whole life cycle of that inner loop, then it means that all the elements which are at the jth index are smaller than the elements which are at the (j+1)th index, and this means the array is completely sorted. So, there is no need to further continue the iterations of outer loop, just break the outer loop, sorting is  

*/



/*

# Why Bubble Sort is Called "Bubble Sort": 

- Well, the selection sort was called "Selection Sort", becuase in each pass through the array we just selected the most minimum element and we made it reach its right place. 
- But Bubble sort gets its name from the way smaller elements "bubble" to the top of the list (or array) while larger elements "sink" to the bottom during each iteration of the sorting process. 
- Unsorted element "bubbles up" to its correct position, that's why "Bubble Sort" is called "Bubble Sort". 
- In the context of a bubble sort algorithm, the "top" of the array refers to the beginning of the array, typically index 0, while the "bottom" refers to the end of the array. This is assuming that the array is being sorted in ascending order. 

*/


#include<iostream>
#include<vector>
#include<utility> 
using namespace std;


/*

# This is Unoptimized Bubble Sort: 
    - T.C. = O((n * (n-1))/2) = O(n^2) 
        - Here, best, average and worst all the cases have O(n^2) time complexity 

    - S.C. = O(1) 

*/ 

void bubble_sort(vector<int> &v){

    int n = v.size(); 

    for(int i=0; i < n-1; i++){
        for(int j=0; j < n-i-1; j++){
            if(v[j] > v[j+1]){
                swap(v[j], v[j+1]); 
            }
        }
    }

}


/* 

# T.C. = O((n * (n-1))/2) = O(n^2) 
     Best Case    |    Average Case   |    Worst Case   | 
      O(n^2)      |       O(n^2)      |      O(n^2)     | 

# S.C. = O(1) 
     Best Case    |    Average Case   |    Worst Case   | 
       O(1)       |       O(1)        |      O(1)       | 

Here, n = the total number of elements which are present inside the input vector named "nums" 

*/ 



/*

# This is Optimized Bubble Sort: 
    - In optimized bubble sort if luckily the array gets sorted then break the loops 

    - T.C. = O((n * (n-1))/2) = O(n^2) 
        - Here, best case time complexity becomes O(n), average and worst case time complexity still remains O(n^2) even for the optimized bubble sort 

    - S.C. = O(1) 

*/

void optimized_bubble_sort(vector<int> &v){

    int n = v.size(); 

    for(int i=0; i < n-1; i++){
        bool done = true; 
        for(int j=0; j < n-i-1; j++){
            if(v[j] > v[j+1]){
                swap(v[j], v[j+1]); 
                done = false;
            }
        }
        if(done) break;
    }

}

/* 

# T.C. = O((n * (n-1))/2) = O(n^2) 
     Best Case    |    Average Case   |    Worst Case   | 
      O(n)        |       O(n^2)      |      O(n^2)     | 

# S.C. = O(1) 
     Best Case    |    Average Case   |    Worst Case   | 
       O(1)       |       O(1)        |      O(1)       | 

Here, n = the total number of elements which are present inside the input vector named "nums" 

*/ 



int main(){
    
    
    vector<int> v{5, 9, 8, 3, 7, 2, 10, 4, 6, 1, 0}; 

    cout << endl;
    cout << "Array before sorting: " << endl; 
    for(int val : v){
        cout << val << " ";
    }
    cout << endl << endl;

    bubble_sort(v); 

    cout << "Array after sorting: " << endl; 
    for(int val : v){
        cout << val << " ";
    }
    cout << endl << endl;
    
    return 0;
}