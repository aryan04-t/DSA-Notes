// Solid Half Diamond 

#include<iostream>
using namespace std;

int main(){

    cout << endl;
    cout << "\"To Print Solid Half Diamond Pattern\"" << endl;
    cout << endl; 

    int height; 
    cout << "Enter the approx half height of \"Solid Half Diamond\": ";
    cin >> height;

    cout << endl;

    // Logic for printing "Solid Half Diamond": 
    for(int row=0; row < height; row++){

        for(int col=0; col < row+1; col++){
            cout << "*";
        }
        cout << endl;
    }

    for(int row=0; row < height-1; row++){

        for(int col=0; col < height-row-1; col++){
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    return 0;
}


/*

    // Alternate Logic-1 for printing "Solid Half Diamond": 

    int i=0;

    for(int row=0; row < 2*(height)-1; row++){

        for(int col=0; col < height; col++){
            if(row < height && col < row+1){
                cout << "*";
            }
            else if(row >= height && col < height-i-1){
                cout << "*";
            }
        }

        if(row >= height){
            i++;
        }

        cout << endl;
    }

*/


/*

    // Alternate Logic-2 for printing "Solid Half Diamond": 

    for(int row=0; row < 2*(height)-1; row++){

        int condition = 0;
        
        if(row < height){
            condition = row + 1;
        }
        else{
            condition = height - (row % height) - 1;
        }

        for(int col=0; col < condition; col++){
            cout << "*";
        }
        cout << endl;
    }

*/


/*

    // Much more compact version of above code using ternary operator

    for(int row=0; row < 2*(height)-1; row++){

        int condition = 0;

        (row < height) ? condition = row + 1 : condition = height - (row % height) - 1;

        for(int col=0; col < condition; col++){
            cout << "*";
        }

        cout << endl;
    }


*/