// Hollow Diamond (Type-1) 

#include<iostream>
using namespace std;

int main(){

    cout << endl;
    cout << "\"To Print Hollow Diamond Pattern (Type-1)\"" << endl;
    cout << endl; 

    int height;
    cout << "Enter the half height of \"Hollow Diamond (Type-1)\": ";
    cin >> height;

    cout << endl;

    // Logic for printing "Hollow Diamond (Type-1)": 
    for(int row=0; row < height; row++){
        for(int col=0; col < height-row-1; col++){
            cout << " ";
        }
        for(int col=0; col < ((2*row)+1); col++){
            if(col==0 || col==(2*row)){
                cout << "*";
            }
            else{
                cout  << " ";
            }
        }
        cout << endl;
    }

    for(int row=0; row < height; row++){
        for(int col=0; col < row; col++){
            cout << " ";
        }
        for(int col=0; col < (2*(height-row)-1); col++){
            if(col==0 || col==(2*(height-row)-2)){ 
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << endl;

    return 0;
}



/*

#Reminder:
---> Never forget to type "cout << endl;" to start a new row, once the current row ends. 

*/



/*

// Hollow Diamond (Type-2) 

#include<iostream>
using namespace std;

int main(){

    cout << endl;
    cout << "\"To Print Hollow Diamond Pattern (Type-2)\"" << endl;
    cout << endl; 

    int height;
    cout << "Enter the approximate half height of \"Hollow Diamond (Type-2)\": ";
    cin >> height;

    cout << endl;

    // Logic for printing "Hollow Diamond (Type-2)": 
    for(int row=0; row < height; row++){
        for(int col=0; col < height-row; col++){
            cout << " ";
        }
        for(int col=0; col < ((2*row)+1); col++){
            if(col==0 || col==(2*row)){
                cout << "*";
            }
            else{
                cout  << " ";
            }
        }
        cout << endl;
    }

    for(int i=0; i <= height; i++){
        if(i==0 || i==height){
            cout << "* ";
        }
        else{
            cout << "  ";
        }
    }
    cout << endl;

    for(int row=0; row < height; row++){
        for(int col=0; col <= row; col++){
            cout << " ";
        }
        for(int col=0; col < (2*(height-row)-1); col++){
            if(col==0 || col==(2*(height-row)-2)){ 
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << endl;

    return 0;
}

*/