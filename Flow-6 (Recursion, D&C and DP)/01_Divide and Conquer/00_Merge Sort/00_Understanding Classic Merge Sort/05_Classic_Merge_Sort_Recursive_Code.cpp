#include<iostream>
#include<vector>
using namespace std;


void mergeArrays(vector<int> &v, int start, int end){


    // I used "new" keyword to dynamically allocate arrays here, but it doesn't matter, vectors can also be used instead 

    int mid  = start + (end - start)/2; 

    int arr1_Len = mid - start + 1;
    int arr2_Len = end - mid;

    int* arr1 = new int[arr1_Len]; 
    int* arr2 = new int[arr2_Len]; 
    

    // Copying Data of Main Array to New Subarrays 

    int i=0, j=start;
    for(; i < arr1_Len; i++, j++){
        arr1[i] = v[j];
    }
    
    i = 0;
    for(; i < arr2_Len; i++, j++){
        arr2[i] = v[j];
    }


    // Taking Data from Subarrays and Copying Data to Main Array While Merging the Subarrays 
    
    int mainIndex = start; 
    i=0, j=0; 
    
    while(i < arr1_Len && j < arr2_Len){
        if(arr1[i] <= arr2[j]){
            v[mainIndex++] = arr1[i++];
        }
        else{
            v[mainIndex++] = arr2[j++];
        }
    }

    if(i == arr1_Len){
        while(j < arr2_Len){
            v[mainIndex++] = arr2[j++];
        }
    }
    
    if(j == arr2_Len){
        while(i < arr1_Len){
            v[mainIndex++] = arr1[i++];
        }
    }

    delete[] arr1;
    delete[] arr2;

}


void mergeSortMain(vector<int> &u, int start, int end){

    if(start == end) return;

    int mid = start + (end - start)/2; 

    mergeSortMain(u, start, mid); 
    mergeSortMain(u, mid+1, end); 

    mergeArrays(u, start, end); 
    
}


void mergeSort(vector<int> &v){

    int n = v.size();
    int start  = 0;
    int end = n-1;

    mergeSortMain(v, start, end);

}


int main(){


    vector<int> v{1, 10, 5, 8, 6, 4, 4, 9, 12, 20}; 

    cout << endl;
    cout << "Vector Before Sorting: "; 
    for(auto val : v){
        cout << val << " "; 
    }
    cout << endl; 


    mergeSort(v); 


    cout << endl;
    cout << "Vector After Sorting: ";
    for(auto val : v){
        cout << val << " ";
    }
    cout << endl << endl; 
    

    return 0;

}


// T.C. = O(n * (log(n) to the base 2)) 
// S.C. = O(n) + O(log(n) to the base 2) = (s.c. contributed by the extra arrays that we use for merging) + (s.c. caused by the function callstack) = O(n) 

// Here, n = total number of elements which are present inside the input vector named "v" 



// Below I wrote above written mergeArrays() function using only vectors instead of "Dynamically Allocating Arrays Explicitly using New Keyword": 


/* 


void mergeArrays(vector<int> &v, int start, int end){

    int mid = start + (end - start)/2; 

    int n = mid - start + 1; 
    int m = end - mid; 

    vector<int> v1; 
    int i = start; 
    while(i <  mid+1){
        v1.push_back(v[i++]);
    }

    vector<int> v2;  
    int j = mid+1;
    while(j <= end){
        v2.push_back(v[j++]); 
    }

    i = 0; 
    j = 0; 
    int k = start; 
    while(i < n && j < m){
        if(v1[i] <= v2[j]){
            v[k++] = v1[i++];
        }
        else{
            v[k++] = v2[j++]; 
        }
    }

    while(j < m){
        v[k++] = v2[j++];
    }

    while(i < n){
        v[k++] = v1[i++];
    }
}



*/ 