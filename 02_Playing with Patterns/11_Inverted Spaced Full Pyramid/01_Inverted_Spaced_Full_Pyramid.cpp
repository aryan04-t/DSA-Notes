// Inverted Spaced Full Pyramid

// This code is exactly same as "Mirror Image of Inverted Half Pyramid" the only difference is that here we've printed "* " instead of "*"

#include<iostream>
using namespace std;


int main(){

    cout << endl;
    cout << "\"To Print Inverted Spaced Full Pyramid Pattern\"" << endl;
    cout << endl; 

    int height;
    cout << "Enter the height of \"Inverted Spaced Full Pyramid\": ";
    cin >> height;

    cout << endl; 

    // Logic for printing "Inverted Spaced Full Pyramid": 
    for(int row=0; row < height; row++){
        for(int col=0; col < row; col++){
            cout << " ";
        }
        for(int col=0; col < height-row; col++){
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl; 

    return 0;
}



/*
    // My Different Logic for Printing "Inverted Spaced Full Pyramid": 
    
    for(int row=0; row < height; row++){
        for(int col=0; col < height; col++){
            if(col<row){
                cout << " ";
            }
            else{
                cout << "* ";
            }
        }
        cout << endl;
    }

*/