#include<iostream>
using namespace std;

int main(){

    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    // int arr[] = {10,20,30,40,50,60,70,80,90};

    int n = sizeof(arr)/sizeof(int);

    int start = 0; 
    int end = n-1; 
    int temp; 

    // Reversing the Array 
    while(start < end){         
        temp = arr[start]; 
        arr[start++] = arr[end]; 
        arr[end--] = temp; 
    } 

    // Printing the Array 
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}