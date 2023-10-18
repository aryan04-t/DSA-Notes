// Hollow Rectangle 


#include<iostream> 
using namespace std;

int main(){

    cout << endl;
    cout << "\"To Print Hollow Rectangle Pattern\"" << endl << endl;

    int horizontalSide;
    cout << "@ Enter the length of its horizontal side: "; 
    cin >> horizontalSide;

    int verticalSide;
    cout << "@ Enter the length of its vertical side: "; 
    cin >> verticalSide;

    cout << endl;

    if(horizontalSide > verticalSide){
        cout << "A Horizontal Hollow Rectangle is Getting Printed..." << endl;
    }
    else if(verticalSide > horizontalSide){
        cout << "A Vertical Hollow Rectangle is Getting Printed..." << endl;
    }
    else{
        cout << "Length of horizontal and vertical side of a rectangle cannot be same." << endl;
        cout << "Try again by entering a valid input." << endl;
        cout << endl;
        return 0;
    }

    cout << endl;

    // Logic For Printing "Hollow Rectangle": 
    
    for(int row=0; row < verticalSide; row++){    
        for(int column=0; column < horizontalSide; column++){

            if(row == 0 || row == verticalSide-1){
                cout << "* ";
            }
            else{
                if(column == 0 || column == horizontalSide-1){
                    cout << "* ";
                }
                else{
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }

    cout << endl;

    return 0;
}