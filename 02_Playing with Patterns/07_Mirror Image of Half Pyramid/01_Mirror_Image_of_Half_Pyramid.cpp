// Mirror Image of Half Pyramid 

#include<iostream>
using namespace std;

int main(){

    cout << endl;
    cout << "\"To Print Mirror Image of Half Pyramid Pattern\"" << endl;
    cout << endl; 

    int height; 
    cout << "Enter the height of \"Mirror Image of Half Pyramid\": "; 
    cin >> height; 

    cout << endl;

    // Logic for printing "Mirror Image of Half Pyramid": 
    for(int row=0; row<height; row++){
        for(int col=0; col < height-row-1; col++){
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