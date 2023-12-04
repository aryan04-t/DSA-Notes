// Extreme Print in an Array 

// sample-input-1: 1,2,3,4,5 
// output: 1,5,2,4,3 

// sample-input-2: 1,2,3,4,5,6 
// output: 1,6,2,5,3,4 

// Explanation: 1st print 0th index, then print n-1 index, then print 1st index, then print n-2 index, and so on, continue printing numbers which are in the extreme of the array and keep narrowing down the gap, do this until you have printed all the elements of the array exactly once.  


#include<iostream>
using namespace std;

int main(){

    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    // int arr[] = {10,20,30,40,50,60,70,80,90};

    int n = sizeof(arr)/sizeof(int);

    int start = 0;
    int end = n-1;

    while(start<=end){
        if(start != end){
            cout << arr[start++] << " "; 
            cout << arr[end--] << " "; 
        }
        else{
            cout << arr[start++];
        }
    }


    return 0;
}


/*

// Alternate way of writing above code  


    while(start<=end){
        
        if(start == end){
            cout << arr[start];
        }
        else{
            cout << arr[start] << " "; 
            cout << arr[end] << " "; 
        }

        start++;
        end--;
    }


*/