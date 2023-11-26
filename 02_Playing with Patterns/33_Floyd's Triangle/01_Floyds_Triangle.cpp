// Floyd's Triangle

#include<iostream>
using namespace std;

int main(){

    cout << endl;
    cout << "\"To Print Floyd's Triangle Pattern\"" << endl;
    cout << endl; 

    int height; 
    cout << "Enter the height of \"Floyd's Triangle\": ";
    cin >> height; 

    cout << endl;

    // Logic for printing "Floyd's Triangle Pattern": 

    int count = 1; 

    for(int row=0; row < height; row++){
        for(int col=0; col < row+1; col++){
            cout << count++ << " ";
        }
        cout << endl;
    }

    cout << endl;

    return 0;
}