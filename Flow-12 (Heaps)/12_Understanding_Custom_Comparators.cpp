// You can basically make a custom comparator function/functor and whenever there is a swapping condition in your code, there you can keep this custom comparator function/fucntor and whenever you will tweek the logic of this comparator function/functor your code's behaviour will change 


#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std; 


// Custom comparator functions
bool ascending(int a, int b){
    return a > b;
}


bool descending(int a, int b){
    return a < b;
}


// Bubble sort function with custom comparator
void bubble_sort(vector<int>& arr, bool (*comparator)(int, int)){

    int n = arr.size(); 
    
    for(int i = 0; i < n; i++){
        
        // Flag to optimize the loop
        bool swapped = false; 
        
        for(int j = 0; j < n - i - 1; j++){
            
            // Using the custom comparator function to compare elements
            if(comparator(arr[j], arr[j + 1])){

                // Swap if the comparator returns true
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        
        // If no two elements were swapped in the inner loop, the array is sorted
        if(!swapped){
            break;
        }
    }
}


int main(){


    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};


    cout << endl; 
    cout << "Original array: ";
    for(int num : arr){
        cout << num << " ";
    }
    cout << endl;


    // Sort in ascending order
    bubble_sort(arr, ascending);

    cout << endl;
    cout << "Sorted array in ascending order: ";
    for(int num : arr){
        cout << num << " ";
    }
    cout << endl;


    // Sort in descending order
    bubble_sort(arr, descending);

    cout << endl; 
    cout << "Sorted array in descending order: ";
    for(int num : arr){
        cout << num << " "; 
    }
    cout << endl << endl;

    return 0;
}



// Just the thing is that in our above custom comparator function we made the swap happen when our custom comparator returns true, but in in-built swap functions of sorting and heaps, C++ says that if you want to swap something on a specific condition then the swapping will happend when you will return false 

// If you don't want to swap then return true on that specific condition 
// Below I have converted my above code as per C++'s custom comparator swapping norms (Just flip the ascending and descending comparator logics and inside the buble sort code where our comparator is being called, put a not gate there) 



/*


#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std; 


// Custom comparator functions
bool ascending(int a, int b){
    return a < b;
}


bool descending(int a, int b){
    return a > b;
}


// Bubble sort function with custom comparator
void bubble_sort(vector<int>& arr, bool (*comparator)(int, int)){

    int n = arr.size(); 
    
    for(int i = 0; i < n; i++){
        
        // Flag to optimize the loop
        bool swapped = false; 
        
        for(int j = 0; j < n - i - 1; j++){
            
            // Using the custom comparator function to compare elements
            if(!comparator(arr[j], arr[j + 1])){

                // Swap if the comparator returns true
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        
        // If no two elements were swapped in the inner loop, the array is sorted
        if(!swapped){
            break;
        }
    }
}


int main(){


    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};


    cout << endl; 
    cout << "Original array: ";
    for(int num : arr){
        cout << num << " ";
    }
    cout << endl;


    // Sort in ascending order
    bubble_sort(arr, ascending);

    cout << endl;
    cout << "Sorted array in ascending order: ";
    for(int num : arr){
        cout << num << " ";
    }
    cout << endl;


    // Sort in descending order
    bubble_sort(arr, descending);

    cout << endl; 
    cout << "Sorted array in descending order: ";
    for(int num : arr){
        cout << num << " "; 
    }
    cout << endl << endl;

    return 0;
}


*/