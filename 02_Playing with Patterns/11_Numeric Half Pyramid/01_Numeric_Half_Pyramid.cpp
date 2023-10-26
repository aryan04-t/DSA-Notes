// Numeric Half Pyramid (Type-1) 

#include<iostream> 
using namespace std;

int main(){

    cout << endl; 
    cout << "\"To Print Numeric Half Pyramid Pattern (Type-1)\"" << endl; 
    cout << endl; 

    int height; 
    cout << "Enter the height of \"Numeric Half Pyramid (Type-1)\": "; 
    cin >> height; 

    cout << endl; 

    // Logic for printing "Numeric Half Pyramid" (Type-1): 
    for(int row=0; row < height; row++){
        for(int col=0; col < row+1; col++){
            cout << col+1 << " ";   
        }
        cout << endl;
    }

    cout << endl;
    
    return 0;
}


/*
    // My Different Logic for Printing "Numeric Half Pyramid (Type-1)": 
    for(int row=0; row < height; row++){

        int count=1;

        for(int col=0; col < row+1; col++){
            cout << count << " ";
            count++;
        }

        cout << endl;
    }
*/


// _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ 


/*

// Numeric Half Pyramid (Type-2) 

#include<iostream> 
using namespace std;

int main(){

    cout << endl; 
    cout << "\"To Print Numeric Half Pyramid Pattern (Type-2)\"" << endl; 
    cout << endl; 

    int height; 
    cout << "Enter the height of \"Numeric Half Pyramid (Type-2)\": "; 
    cin >> height; 

    cout << endl; 

    // Logic for printing "Numeric Half Pyramid (Type-2)": 
    for(int row=0; row < height; row++){
        for(int col=0; col < row+1; col++){
            cout << row + col + 1 << " ";   
        }
        cout << endl;
    }

    cout << endl;
    
    return 0;
}

*/