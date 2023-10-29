// Numeric Full Pyramid 

#include<iostream>
using namespace std;

int main(){

    cout << endl;
    cout << "\"To Print Numeric Full Pyramid Pattern\"" << endl;
    cout << endl; 

    int height;
    cout << "Enter the height of \"Numeric Full Pyramid\": ";
    cin >> height;

    cout << endl;

    // Logic for printing "Numeric Full Pyramid": 
    for(int row=0; row < height; row++){

        // Spaces
        for(int col=0; col < height-row-1; col++){
            cout << "  ";
        }
        
        // Numbers
        for(int col=0; col < row+1; col++){
            cout << row + col + 1 << " ";
        }

        // Reverse Counting 
        int start = 2*row;
        for(int col=0; col < row; col++){
            cout << start << " ";
            start--;
        }

        cout << endl;
    }

    cout << endl;

    return 0;
}



/*

    // My Different Logic for Printing "Numeric Full Pyramid": 

    for(int row=0; row < height; row++){
        for(int col=0; col < height-row-1; col++){
            cout << "  ";
        }
        
        int start = row+1;

        for(int col=0; col < row+1; col++){
            cout << start << " ";
            start++;
        }

        start--;

        for(int col=0; col < row; col++){
            start--;
            cout << start << " ";
        }

        cout << endl;
    }
    
*/