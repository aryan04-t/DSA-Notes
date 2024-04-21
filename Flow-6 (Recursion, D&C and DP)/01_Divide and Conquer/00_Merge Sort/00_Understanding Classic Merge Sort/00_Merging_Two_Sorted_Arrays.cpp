// Merge 2 Sorted Arrays such that ending merged array is also sorted 


#include<iostream> 
#include<vector> 
using namespace std; 


vector<int> mergeArrays(const vector<int> &arr1, const vector<int> &arr2){

    vector<int> ans;

    int n = arr1.size();
    int m = arr2.size();

    int i=0, j=0;

    while(i < n && j < m){
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
        while(j < m){
            ans.push_back(arr2[j]);
            j++;
        }
    }
    
    if(j == m){
        while(i < n){
            ans.push_back(arr1[i]);
            i++;
        }
    }

    return ans;
}


int main(){


    // Test Case - 0:     
    vector<int> v1{4, 7, 10, 19};    
    vector<int> v2{1, 3, 5, 8, 9, 15, 18};    
    
    vector<int> ans = mergeArrays(v1, v2);

    cout << endl;
    for(auto i : ans){
        cout << i << " ";
    }
    cout << endl << endl;


    return 0;
}



/*


Test case - 1:

vector<int> v1{1, 3, 5, 8, 9, 15, 18};    
vector<int> v2{4, 7, 10, 19};    



Test Case - 2: 

vector<int> v1{4, 7, 10, 19};    
vector<int> v2{1, 3, 5, 8, 9};    


*/


// T.C. = O(n + m) 
// S.C. = O(n + m) 

// Here, n = number of elements which are present inside input vector named "v1", and m = number of elements which are present inside input vector named "v2" 