// Numeric Hollow Half Pyramid 

#include<iostream>
using namespace std;


int main(){

    cout << endl;
    cout << "\"To Print Numeric Hollow Half Pyramid Pattern\"" << endl;
    cout << endl; 

    int height; 
    cout << "Enter the height of \"Numeric Hollow Half Pyramid\": "; 
    cin >> height; 

    cout << endl;

    // Logic for printing "Numeric Hollow Half Pyramid": 
    for(int row=0; row < height; row++){
        for(int col=0; col < row+1; col++){
            if(col==0 || col==row || row==height-1){
                cout << col + 1 << " ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << endl;

    return 0;
}