// # Arrays and functions 

// Wehenever you pass an array to a function, it is always passed using "Pass by Reference Method" by deafult, you can never pass an array using "Pass by Value Method" 
// Means base address of an array is always passed to the function, and due that function parameter is also always referring to the same existing array, a copy of an array is not created when you pass an array to a function as an argument. 

// Copy of variables gets created when you pass them to a function using "Pass by Value Method" 


#include<iostream>
using namespace std;

void printArray(int brr[]){

    for(int i=0; i<5; i++){
        cout << brr[i] << " ";
    }

    cout << endl;

}

void insertInArray(int crr[]){

    for(int i=0; i<5; i++){
        crr[i] = crr[i] + 1;
    }

    cout << "* Printing array in the insertInArray() function, after the insertion of elements which overwrited exisitng elements: ";
    printArray(crr);

}

int main(){

    int arr[] = {1,3,5,7,9};

    cout << endl;

    cout << "* Printing Array in the main() function: ";
    printArray(arr);

    cout << "* Inserting elements in Array which will overwrite existing elements..." << endl;
    insertInArray(arr);

    cout << "* Printing array again in the main() function: ";
    printArray(arr);

    // Did you notice, that above all changes are applied to the same array 
    // Because as we studied above, array is always passed using "Pass by Reference Method"

    // So, pass by reference means, address/reference of the array is getting passed in functions, and all the names of array in above code: arr, brr, crr, all these names are referring the same base address, and that's why whenever any function performs whatever changes in the array, the changes are occuring in the original array. 

    cout << endl;
    
    return 0;
}

