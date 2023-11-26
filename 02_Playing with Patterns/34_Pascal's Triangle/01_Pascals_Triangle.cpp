// Pascal's Triangle

#include<iostream>
using namespace std;

int main(){

    cout << endl;
    cout << "\"To Print Pascal's Triangle Pattern\"" << endl;
    cout << endl; 

    int height; 
    cout << "Enter the height of \"Pascal's Triangle\": ";
    cin >> height; 

    cout << endl;

    // Logic for printing "Pascal's Triangle Pattern": 

    for(int row=1; row <= height; row++){

        int P = 1;
        
        for(int col=1; col <= row; col++){
            cout << P << " ";
            P = P * (row - col) / col;
        }
        
        cout << endl;
        
    }

    cout << endl;

    return 0;
}