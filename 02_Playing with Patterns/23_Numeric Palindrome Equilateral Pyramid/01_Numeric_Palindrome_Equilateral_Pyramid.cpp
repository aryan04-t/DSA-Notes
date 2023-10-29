// Numeric Palindrome Equilateral Pyramid 

#include<iostream>
using namespace std;


int main(){

    cout << endl;
    cout << "\"To Print Numeric Palindrome Equilateral Pyramid Pattern\"" << endl;
    cout << endl; 

    cout << endl;

    int height; 
    cout << "Enter the height of \"Numeric Palindrome Equilateral Pyramid\": "; 
    cin >> height;

    cout << endl;

    // Logic for printing "Numeric Palindrome Equilateral Pyramid": 
    for(int row=0; row < height; row++){
        for(int col=0; col < height-row-1; col++){
            cout << "  ";
        }
        for(int col=0; col < row+1; col++){
            cout << col+1 << " ";
        }
        for(int col=row; col > 0; col--){
            cout << col << " ";
        }
        cout << endl;
    }
    
    cout << endl;

    return 0;
}


/*

    // My Alternate Logic for printing "Numeric Palindrome Equilateral Pyramid": 

    for(int row=0; row < height; row++){
        for(int col=0; col < height-row-1; col++){
            cout << "  ";
        }
        for(int col=0, i=row; col < 2*(row)+1; col++){
            if(col<=row){
                cout << col+1 << " ";
            }
            else{
                cout << i-- << " ";
            }
        }
        cout << endl;
    }

*/


/*

    // Much more compact version of above code using ternary operator
    
    // And using property of loops/if statements which says "If you don't define body of loop/if statement explicitly using curly braces, then until next terminator everything in between will be considered as the body of loop/if statement" 


    for(int row=0; row < height; row++){
        for(int col=0; col < height-row-1; col++)
            cout << "  ";
        for(int col=0, i=row; col < 2*(row)+1; col++)
            (col<=row) ? cout << col+1 << " " : cout << i-- << " ";
        cout << endl;
    }

*/