/*


# Selection Sort: 

@ Ascending Order Selection Sort Algorithm: 

    * Select the most minimum element in the range of unsorted elements and then just swap that element with its valid sorted index position 

    --> Selection sort is same as its name 
    --> i = 0; 
    --> The outer loop runs n-1 times because if you made n-1 elements of array reach their correct place then the nth element would have reached its right place on its own in this whole process 
    --> Now for performing selection sort, you basically select the most minimum number out of all the numbers which are present in the index range [i, n-1], and then you just swap that minimum number with the ith index, and i++ 
    --> You do this with all the indexes one by one which are in the range [0, n-2] 
    --> And in the end your array will be sorted 

*/


#include<iostream>
#include<vector>
#include<utility> 
using namespace std;


// T.C. = O((n * (n-1))/2) = O(n^2) 
// S.C. = O(1) 
void selection_sort(vector<int> &v){

    int n = v.size(); 

    for(int i=0; i < n-1; i++){
        int mini = v[i]; 
        int miniIndex = i; 
        for(int j=i+1; j < n; j++){
            if(v[j] < mini){
                mini = v[j];
                miniIndex = j; 
            } 
        }
        swap(v[i], v[miniIndex]); 
    }

}


int main(){
    
    vector<int> v{5, 9, 8, 3, 7, 2, 10, 4, 6, 1, 0}; 

    cout << endl;
    cout << "Array before sorting: " << endl; 
    for(int val : v){
        cout << val << " ";
    }
    cout << endl << endl;

    selection_sort(v); 

    cout << "Array after sorting: " << endl; 
    for(int val : v){
        cout << val << " ";
    }
    cout << endl << endl;
    
    return 0;
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