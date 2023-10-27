// Non-Spaced Full Pyramid

#include<iostream>
using namespace std;

int main(){

    cout << endl;
    cout << "\"To Print Non-Spaced Full Pyramid Pattern\"" << endl;
    cout << endl; 

    int height; 
    cout << "Enter the height of \"Non-Spaced Full Pyramid\": "; 
    cin >> height; 

    cout << endl;

    // Logic for printing "Non-Spaced Full Pyramid": 
    for(int row=0; row < height; row++){
        for(int col=0; col < height-row-1; col++){
            cout << " ";
        }
        for(int col=0; col < (2*row)+1; col++){
            cout << "*";
        }
        cout << endl;
    }
    
    cout << endl;

    return 0;

}


/*
    // My Different Logic for Printing "Non-Spaced Full Pyramid": 
    for(int row=0; row < height; row++){
        for(int col=0; col < height+row; col++){
            if(col < height-row-1){
                cout << " "; 
            }
            else{
                cout << "*"; 
            }
        }
        cout << endl;
    }
*/