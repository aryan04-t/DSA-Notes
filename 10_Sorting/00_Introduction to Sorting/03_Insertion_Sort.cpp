/*

# Insertion Sort: 

@ Ascending Order Insertion Sort Algorithm: 

    - In insertion sort we build the sorted array in the left most side, and we insert the elements one by one in the right places with resepect to the elements which we have encountered until now and has been inserted in their right places in the left most side of array 
    
    - Fetch the value which you have insert 
    - Find its perfect spot in the currently sorted elements by shifting the elements based on comparison, if you're doing a ascending sort then if(val < v[j]), shift j to j+1 index, here we're making j iterate from [i-1, 0] 
    - Once you have made place for the new element to be inserted inside elements which have been sorted until now, just insert the value at its correct place 

*/


/*

# Real Life Example of Insertion Sort, Arranging a Deck of Cards: 

    - Arranging a pack of playing cards is a perfect real-life example to understand insertion sort. 
    
    @ Imagine you have a shuffled deck of cards, and you want to arrange them in ascending order by their rank (from Ace to King) and by their suits (hearts, diamonds, clubs, spades). Here's how you can relate this process to insertion sort:

        1. Initial State: 
            - You start with the cards randomly shuffled, just like an unsorted array. 
        2. Building the Sorted Sequence: 
            - In insertion sort, you start with the second element (the second card in our case) and compare it with the first one. If it's smaller, you swap them to ensure the first two cards are in order. Then, you proceed to the third card, comparing it with the previous ones and inserting it into the correct position in the sorted sequence. 
        3. Iterative Process: 
            - You continue this process iteratively, taking one card at a time from the unsorted part of the deck and placing it in its correct position in the sorted part. 
        4. Maintaining Sortedness: 
            - At each step, the portion of the deck you've already sorted remains sorted, just like in insertion sort, where the elements to the left of the current one are already sorted. 


*/


/*

# When to use Insertion Sort: 

    ---> Insertion sort is suitable for small sets of data and for almost sorted arrays, because you might only need a few swaps to get them fully sorted. 
    ---> In terms of performance, insertion sort performs well on small datasets or nearly sorted arrays due to its nature of inserting elements into their correct positions, often with minimal movement. 

*/



#include<iostream>
#include<vector>
#include<utility> 
using namespace std;


// T.C. = O((n * (n-1))/2) = O(n^2) 
// Here, the best case time complexity of insertion sort is O(n), average and worst case time complexity is O(n^2) even for insertion sort 

// S.C. = O(1) 
void insertion_sort(vector<int> &v){

    int n = v.size(); 

    for(int i=1; i < n; i++){
        int val = v[i];
        int j= i - 1;
        while(j >= 0){
            if(val < v[j]){
                v[j+1] = v[j]; 
            }
            else{
                break;
            }
            j--;
        }
        v[j+1] = val;
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

    insertion_sort(v); 

    cout << "Array after sorting: " << endl; 
    for(int val : v){
        cout << val << " ";
    }
    cout << endl << endl;
    
    return 0;
}