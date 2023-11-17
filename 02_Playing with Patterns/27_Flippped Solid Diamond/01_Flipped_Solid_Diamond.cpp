// Flipped Solid Diamond 

#include<iostream>
using namespace std;


int main(){

    cout << endl;
    cout << "\"To Print Flipped Solid Diamond Pattern\"" << endl;
    cout << endl; 

    int height; 
    cout << "Enter the approx half height of \"Flipped Solid Diamond\": ";
    cin >> height;

    cout << endl;

    // Logic for printing "Flipped Solid Diamond": 
    for(int row=0; row < height; row++){
        for(int col=0; col < height-row; col++){
            cout << "*";
        }
        for(int col=0; col < 2*(row)+1; col++){
            cout << " ";
        }
        for(int col=0; col < height-row; col++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i=0; i < 2*(height)+1; i++){
        cout << " ";
    }
    cout << endl;

    for(int row=0; row < height; row++){
        for(int col=0; col < row+1; col++){
            cout << "*";
        }
        for(int col=0; col < 2*(height-row)-1; col++){
            cout << " ";
        }
        for(int col=0; col < row+1; col++){
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    return 0;
}

