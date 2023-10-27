// Hollow Spaced Full Pyramid 

#include<iostream>
using namespace std;

int main(){

    cout << endl;
    cout << "\"To Print Hollow Spaced Full Pyramid Pattern\"" << endl;
    cout << endl; 

    int height; 
    cout << "Enter the height of \"Hollow Spaced Full Pyramid\": "; 
    cin >> height; 

    cout << endl;

    // Logic for printing "Hollow Spaced Full Pyramid": 
    for(int row=0; row < height; row++){
        for(int col=0; col < height-row-1; col++){
            cout << " ";
        }
        for(int col=0; col < row+1; col++){
            if(row==0 || row==height-1){
                cout << "* ";
            }
            else{
                if(col==0 || col==row){
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


/*

    // My Different Logic for Printing "Hollow Spaced Full Pyramid": 
    for(int row=0; row < height; row++){
        for(int col=0; col < height; col++){
            if(col < height-row-1){
                cout << " ";
            }
            else{
                if(row==0 || row==height-1){
                    cout << "* ";
                }
                else{
                    if(col==height-row-1 || col==height-1){
                        cout << "* ";
                    }
                    else{
                        cout << "  ";
                    }
                }
            }
        }
        cout << endl;
    }

*/