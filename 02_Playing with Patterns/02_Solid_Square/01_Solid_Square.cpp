// Solid Square  


#include<iostream> 
using namespace std;

int main(){

    cout << endl;
    cout << "\"To Print Solid Square Pattern\"" << endl << endl;

    int length;
    cout << "@ Enter its side's length: ";
    cin >> length;

    cout << endl;

    // Logic for printing "Solid Square": 

    // outer-loop (represents rows) 
    for(int row=0; row < length; row++){

        // inner-loop (represents columns) 
        for(int col=0; col < length; col++){
            cout << "* ";
        }
        cout << endl;
    } 

    cout << endl; 

    return 0;
}