// Spaced Full Pyramid 

// This code is exactly same as "Mirror Image of Half Pyramid" the only difference is that here we've printed "* " instead of "*"

#include<iostream>
using namespace std;


int main(){

    cout << endl;
    cout << "\"To Print Spaced Full Pyramid Pattern\"" << endl;
    cout << endl; 

    int height; 
    cout << "Enter the height of \"Spaced Full Pyramid\": "; 
    cin >> height; 

    cout << endl;

    // Logic for printing "Spaced Full Pyramid": 
    for(int row=0; row<height; row++){
        for(int col=0; col < height-row-1; col++){
            cout << " ";
        }
        for(int col=0; col < row+1; col++){
            cout << "* ";
        }
        cout << endl;
    }
    
    cout << endl;

    return 0;

}


/*

    // My Different Logic for Printing "Spaced Full Pyramid": 
    for(int row=0; row < height; row++){
        for(int col=0; col < height; col++){
            if(col < height-row-1){
                cout << " ";
            }
            else{
                cout << "* ";
            }
        }
        cout << endl;
    }

*/