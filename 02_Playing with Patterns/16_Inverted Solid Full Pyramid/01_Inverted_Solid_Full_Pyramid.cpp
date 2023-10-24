// Inverted Solid Full Pyramid 

#include<iostream>
using namespace std;

int main(){

    cout << endl; 
    cout << "\"To Print Inverted Solid Full Pyramid Pattern\"" << endl;
    cout << endl; 

    int height; 
    cout << "Enter the height of \"Inverted Solid Full Pyramid\": "; 
    cin >> height; 

    cout << endl;

    // Logic for printing "Inverted Solid Full Pyramid": 
    for(int row=0; row < height; row++){
        for(int col=0; col < row; col++){
            cout << " ";
        }
        for(int col=0; col < (2*(height-row))-1; col++){
            cout << "*";
        }
        cout << endl;
    }
    
    cout << endl;

    return 0;

}


/*
    // My Different Logic for Printing "Inverted Solid Full Pyramid": 
    for(int row=0; row < height; row++){
        for(int col=0; col < 2*(height)-row-1; col++){
            if(col < row){
                cout << " "; 
            }
            else{
                cout << "*"; 
            }
        }
        cout << endl;
    }
*/