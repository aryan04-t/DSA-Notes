// Solid Rectangle 


#include<iostream> 
using namespace std;

int main(){

    cout << endl;
    cout << "\"To Print Solid Rectangle Pattern\"" << endl << endl;

    int horizontalSide;
    cout << "@ Enter the length of its horizontal side: ";
    cin >> horizontalSide;

    int verticalSide;
    cout << "@ Enter the length of its vertical side: ";
    cin >> verticalSide;

    cout << endl;

    if(horizontalSide > verticalSide){
        cout << "A Horizontal Solid Rectangle is Getting Printed..." << endl;
    }
    else if(verticalSide > horizontalSide){
        cout << "A Vertical Solid Rectangle is Getting Printed..." << endl;
    }
    else{
        cout << "Length of horizontal and vertical side of a rectangle cannot be same." << endl;
        cout << "Try again by entering a valid input." << endl;
        cout << endl;
        return 0;
    }

    cout << endl;

    // Logic for printing "Solid Rectangle": 

    // outer-loop (represents rows) 
    for(int row=0; row < verticalSide; row++){

        // inner-loop (represents columns one by one from LHS to RHS per row) 
        for(int col=0; col < horizontalSide; col++){
            cout << "* ";
        }
        cout << endl;
    }   

    cout << endl; 

    return 0;
}