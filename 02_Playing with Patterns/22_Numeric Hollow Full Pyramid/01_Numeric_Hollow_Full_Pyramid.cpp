// Numeric Hollow Full Pyramid 

#include<iostream>
using namespace std;

int main(){

    cout << endl;
    cout << "\"To Print Numeric Hollow Full Pyramid Pattern\"" << endl;
    cout << endl; 

    cout << endl;

    int height;
    cout << "Enter the height of \"Numeric Hollow Full Pyramid\": ";
    cin >> height;

    cout << endl;

    // Logic for printing "Numeric Hollow Full Pyramid": 
    for(int row=0; row < height; row++){
        for(int col=0; col < height-row-1; col++){
            cout << " ";
        }

        int start = 1;

        for(int col=0; col < ((2*row)+1); col++){
            if(row==0 || row==height-1){
                if(start <= height){
                    cout << start << " ";
                    start++;
                }
            }
            else{
                if(col==0){
                    cout << col+1;
                }
                else if(col==(2*row)){
                    cout << row+1;
                }
                else{
                    cout << " ";
                }
            }   
        }
        cout << endl;
    }

    cout << endl;

    return 0;
}


/*

    // Alternate Logic for printing "Numeric Hollow Full Pyramid": 

    for(int row=0; row < height-1; row++){
        for(int col=0; col < height-row-1; col++){
            cout << " ";
        }
        for(int col=0; col < ((2*row)+1); col++){
            if(col==0){
                cout << col+1;
            }
            else if(col==(2*row)){
                cout << row+1;
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    
    int start = 1;

    for(int col=0; col < ((2*height)-1); col++){
        if(col%2==0){
            cout << start;
            start++;
        }
        else{
            cout << " ";
        }
    }

*/
