// Mirror Image of Inverted Half Pyramid 

#include<iostream>
using namespace std;

int main(){

    cout << endl;
    cout << "\"To Print Mirror Image of Inverted Half Pyramid Pattern\"" << endl;
    cout << endl; 

    int height;
    cout << "Enter the height of \"Mirror Image of Inverted Half Pyramid\": ";
    cin >> height;

    cout << endl; 

    // Logic for printing "Mirror Image of Inverted Half Pyramid": 
    for(int row=0; row < height; row++){
        for(int col=0; col < row; col++){
            cout << " ";
        }
        for(int col=0; col < height-row; col++){
            cout << "*";
        }
        cout << endl;
    }

    cout << endl; 

    return 0;
}



/*
    // My Different Logic for Printing "Mirror Image of Inverted Half Pyramid": 

    for(int row=0; row < height; row++){
        for(int col=0; col < height; col++){
            if(col<row){
                cout << " ";
            }
            else{
                cout << "*";
            }
        }
        cout << endl;
    }
*/