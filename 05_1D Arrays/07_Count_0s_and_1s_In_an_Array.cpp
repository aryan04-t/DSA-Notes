#include<iostream>
using namespace std;

int main(){

    int arr[] = {0,2,1,30,5,7,0,20,9,1,6,11,0,15,1,0,100,99,1,0,1,0};

    int n = sizeof(arr)/sizeof(int);
    
    int count_0 = 0;
    int count_1 = 0;

    for(int i=0; i < n; i++){
        // If zero found, increment count_0 
        if(arr[i]==0){
            count_0++;
        }
        // If one found, increment count_1  
        if(arr[i]==1){
            count_1++;
        }

        // If array just had 1s and 0s then we could have used if and else statement
        // But array also has numbers other than 0s and 1s that's why we used 2 if statements 
    }
    
    cout << endl; 
    cout << "@ Number of Zeroes in the array are: " << count_0 << endl; 
    cout << "@ Number of Ones in the array are: " << count_1 << endl; 
    cout << endl; 

    return 0;
} 


/*

// User input code for counting number of 1s and 0s 

#include<iostream>
using namespace std;

int main(){

    int arr[1000];

    int n; 
    cout << "Enter the number of elements you want to insert in the array (The number should not be more than 1000): "; 
    cin >> n; 

    cout << "Enter the " << n << " elements which you want to insert in the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i]; 
    }
    
    int count_0 = 0;
    int count_1 = 0;

    for(int i=0; i < n; i++){
        // If zero found, increment count_0 
        if(arr[i]==0){
            count_0++;
        }
        // If one found, increment count_1  
        if(arr[i]==1){
            count_1++;
        }

        // If array just had 1s and 0s then we could have used if and else statement
        // But array also has numbers other than 0s and 1s that's why we used 2 if statements 
    }
    
    cout << endl; 
    cout << "@ Number of Zeroes in the array are: " << count_0 << endl; 
    cout << "@ Number of Ones in the array are: " << count_1 << endl; 
    cout << endl; 

    return 0;
} 

*/


/*

// Count the number of 100 in the array 

#include<iostream>
using namespace std;

int main(){

    int arr[] = {0,200,100,30,500,70,100,5,15,98,12,100,100,61,52,15,100,100,100,100};

    int n = sizeof(arr)/sizeof(int);
    
    int count_100 = 0;

    for(int i=0; i < n; i++){
        // If 100 found, increment count_100  
        if(arr[i]==100){
            count_100++;
        }
    }
    
    cout << endl; 
    cout << "@ Number of Ones in the array are: " << count_100 << endl; 
    cout << endl; 

    return 0;
}


*/