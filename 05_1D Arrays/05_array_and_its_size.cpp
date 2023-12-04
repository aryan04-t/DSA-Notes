// Whenever you pass an array to a function, if the number of elements inserted in the array is less than the size of array 

// Then while passing the array to a function, you should also always pass the value of "number of elements which are inserted in the array" 

// This number will help the function to perform operations on array only upto the required index 

// Because after that last required index, either the array just have garbage values or they're values that are not our function's concern 



#include<iostream>
using namespace std;

void printArray(int brr[], int elements_inserted){

    for(int i=0; i < elements_inserted; i++){
        cout << brr[i] << " ";
    }

    cout << endl;

}

int main(){

    cout << endl;

    int arr[1000];
    
    int n; 
    cout << "Enter the number of elements you want to insert in the array (The number should not be more than 1000): "; 
    cin >> n; 

    cout << "Enter the " << n << " elements which you want to insert in the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i]; 
    }

    cout << "Printing the elements which you have inserted in the array: ";
    printArray(arr, n);

    cout << endl;
    
    return 0;
}


// In this above code you can see that after the last required index all the rest of the values are garbage values inside the array, and they're not the concern of our printArray() function 

// In above code the last required index or you can say the number of elements which will be inserted in the array, depend on user's input that how many elements the user wants to insert 


