#include<iostream>
using namespace std;

int main(){

    int arr[10];

    int n;
    cout << "Enter the number of element: ";
    cin >> n;

    cout << "Enter value of " << n << " elements of the array: ";

    // Taking input in an array 
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Printing double of values which are stored in array: ";
    
    // Printing values which we've stored in the array 
    for(int i=0; i<n; i++){
        // 'i' named variable is mostly used in loop beacuse 'i' is short of "index" 
        cout << 2*(arr[i]) << " ";
    }

    return 0;
}