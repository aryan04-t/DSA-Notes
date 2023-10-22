// Half Pyramid 

#include<iostream> 
using namespace std;

int main(){

    cout << endl;
    cout << "\"To Print Half Pyramid Pattern\"" << endl;
    cout << endl;

    int height; 
    cout << "@ Enter the height of \"Half Pyramid\": "; 
    cin >> height; 

    cout << endl;
    
    // Logic for printing "Half Pyramid": 
    for(int row=0; row < height; row++){
        for(int col=0; col < row+1; col++){
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;

    return 0;
}