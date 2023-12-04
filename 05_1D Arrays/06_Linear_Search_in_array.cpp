/*

# Linear Search 

---> When you try to search a value in a data structure by iterating each and every index one by one in a linear manner, either incrementally or decrementally, then it is called a linear search. 

*/


// Linear Search in Array 


// Code of "Linear Search" using Function: 
#include<iostream>
using namespace std;


bool linearSearch(int brr[], int number_elements, int search_value){

    for(int i=0; i < number_elements; i++){
        if(brr[i] == search_value){
            return true;
        }
    }

    return false;
}

int main(){

    int arr[] = {1,7,3,0,5,1,8,9,4,9};
    
    int n = sizeof(arr)/sizeof(int);

    int key;
    cout << "# Enter the key you want to search in the array: ";
    cin >> key;

    if(linearSearch(arr, n, key)){
        cout << "---> Key Found" << endl;
    }
    else{
        cout << "---> Key Not Found" << endl;
    }

    return 0;
}


/*

// Code of "Linear Search" without using Function: 
#include<iostream>
using namespace std;


int main(){

    int arr[] = {1,7,3,0,5,1,8,9,4,9};
    
    int n = sizeof(arr)/sizeof(int);

    int key;
    cout << "# Enter the key you want to search in the array: "; 
    cin >> key; 

    bool flag = 0;

    for(int i=0; i < n; i++){
        if(arr[i] == key){
            flag=1;
            break;
        }
    }

    if(flag)
        cout << "---> Key Found" << endl;
    else
        cout << "---> Key Not Found" << endl;

    return 0;
}

*/