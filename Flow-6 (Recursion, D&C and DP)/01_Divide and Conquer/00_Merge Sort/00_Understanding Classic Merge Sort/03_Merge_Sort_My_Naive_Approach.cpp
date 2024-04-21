// I have never seen merge sort's code ever before 

// Right now I just heard and saw Love Babbar's explanation of how merge sort works theoretically and diagramatically and now I am just going to implement it on my own from scratch using my "Newbie Coding Skills 


#include<iostream> 
#include<vector> 
using namespace std;


vector<int> mergeArrays(const vector<int> &arr1, const vector<int> &arr2){

    vector<int> ans;

    int n = arr1.size();
    int m = arr2.size();

    int i=0, j=0;

    for(; i < n && j < m;){
        if(arr1[i] <= arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }
        else{
            ans.push_back(arr2[j]);
            j++;
        }
    }

    if(i == n){
        while(j != m){
            ans.push_back(arr2[j]);
            j++;
        }
    }
    
    if(j == m){
        while(i != n){
            ans.push_back(arr1[i]);
            i++;
        }
    }

    return ans;
}


vector<int> mergeSortMain(vector<int> v){
    
    int n = v.size();

    if(n == 1){
        return v;
    }

    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    vector<int> arr1;
    vector<int> arr2;

    int i = start;
    for(; i <= mid; i++){
        arr1.push_back(v[i]);
    }

    for(; i < n; i++){
        arr2.push_back(v[i]);
    }

    arr1 = mergeSortMain(arr1);
    arr2 = mergeSortMain(arr2);

    vector<int> ans = mergeArrays(arr1, arr2);

    return ans;

}


void mergeSort(vector<int>& v){

    vector<int> ans = mergeSortMain(v);

    v = ans;

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



// Space complexity of above code is really bad I know that 

// After writing this above code, I just saw the code of "Merge Sort" for the 1st time ever, and I know my code is not optimized at all, but I understood the concept of "Merge Sort" really well after trying to code this on my own 


// I will implement optimized merge sort ahead and I am not going to find space complexity of this above written code, because I already know that it's "too bad" 



// Note: 


/* 

--> After seeing the optimized merge sort code, I understood the mistake that I made here while writing this above code 
--> While dividing the array into halves until each array is of size 1, I literally divide the array into to new 2 sub-arrays physically each time 
--> But instead, diving the array into halves logically, is a much better way of dividing the array, like this we don't end up using extra space 


*/ 