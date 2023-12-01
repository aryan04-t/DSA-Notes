#include<iostream>
using namespace std;

int main(){

    int arr[] = {2, 3, 5, 9, 16, 7};
    
    int n = sizeof(arr)/sizeof(int);

    cout << "All values inside the array are: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Replacing all values with 1..." << endl; 
    for(int i=0; i<n; i++){
        arr[i]=1;
    }

    cout << "After replacing all values of the array with 1, printing all the values which are stored in array: ";
    
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}