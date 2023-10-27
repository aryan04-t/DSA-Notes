// Inverted Numeric Hollow Half Pyramid 

#include<iostream>
using namespace std;


int main(){

    cout << endl;
    cout << "\"To Print Inverted Numeric Hollow Half Pyramid Pattern\"" << endl;
    cout << endl;

    int height;
    cout << "Enter the height for \"Inverted Numeric Hollow Half Pyramid\": ";
    cin >> height; 

    cout << endl;

    // Logic for printing "Inverted Numeric Hollow Half Pyramid": 
    for(int row=0; row<height; row++){
        for(int col=0; col < height-row; col++){
            if(row==0){
                cout << col + 1 << " ";
            }
            else{
                if(col==0){
                    cout << row + 1 << " ";
                }
                else if(col==height-row-1){
                    cout << height << " "; 
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

    // Alternate Logic-1 for printing "Inverted Numeric Hollow Half Pyramid ": 

    for(int row=0; row < height; row++){

        int count = row+1;

        for(int col=0; col < height-row; col++){
            if(row==0 || col==0 || col==height-row-1){
                cout << count++ << " ";
            }
            else{
                cout << "  ";
                count++;
            }
        }

        cout << endl;
    }

*/



/*

    // Alternate Logic-2 for printing "Inverted Numeric Hollow Half Pyramid": 
    
    for(int row=0; row<height; row++){
        for(int j=row+1; j <= height; j++){
            if(j==row+1 || j==height || row==0){
                cout << j << " ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }

*/


