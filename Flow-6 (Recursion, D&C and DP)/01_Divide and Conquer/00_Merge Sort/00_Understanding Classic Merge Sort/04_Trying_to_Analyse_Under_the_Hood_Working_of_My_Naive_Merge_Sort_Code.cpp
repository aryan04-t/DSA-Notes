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

    cout << endl;
    cout << "Size of v: " << n << endl;
    cout << "Start: " << start << endl;
    cout << "End: " << end << endl;
    cout << "Mid: " << mid << endl;
    cout << "v: ";
    for(auto val : v){
        cout << val << " ";
    }
    cout << endl;


    vector<int> arr1;
    vector<int> arr2;

    int i = start;
    for(; i <= mid; i++){
        arr1.push_back(v[i]);
    }

    for(; i < n; i++){
        arr2.push_back(v[i]);
    }

    cout << "arr1: ";
    for(auto val : arr1){
        cout << val << " ";
    }
    cout << endl;

    cout << "arr2: ";
    for(auto val : arr2){
        cout << val << " ";
    }
    cout << endl;
    cout << endl;

    arr1 = mergeSortMain(arr1);
    arr2 = mergeSortMain(arr2);

    vector<int> ans = mergeArrays(arr1, arr2);

    cout << "merged arr1 + arr2: ";
    for(auto val : ans){
        cout << val << " ";
    }
    cout << endl;
    cout << endl;


    return ans;

}


void mergeSort(vector<int>& v){

    vector<int> ans = mergeSortMain(v);

    v = ans;

}


int main(){


    vector<int> v{1, 10, 5, 8, 6, 4, 4, 9, 12, 20}; 

    cout << endl << endl;
    cout << "Vector Before Sorting: ";
    for(auto val : v){
        cout << val << " ";
    }
    cout << endl << endl;


    mergeSort(v);


    cout << endl;
    cout << "Vector After Sorting: ";
    for(auto val : v){
        cout << val << " ";
    }
    cout << endl << endl << endl;


    return 0;
}

