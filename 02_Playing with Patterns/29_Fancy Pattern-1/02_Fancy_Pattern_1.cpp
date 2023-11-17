// Fancy Pattern-1   

#include<iostream>
using namespace std;

int main(){

    cout << endl;
    cout << "\"To Print Fancy Pattern-1\"" << endl;
    cout << endl; 

    int height; 
    cout << "Enter the height of \"Fancy Pattern-1\": ";
    cin >> height;

    cout << endl;

    if(height > 9){
        cout << "Height of the \"Fancy Pattern-1\" should not be greater than 9." << endl << endl;
        return 0;
    }

    // Logic for printing "Fancy Pattern-1": 

    for(int row=0; row < height; row++){
        for(int col=0; col < 8-row; col++){
            cout << "*";
        }
        for(int col=0; col < 2*(row)+1; col++){
            if(col%2==0){
                cout << row + 1;
            }
            else{
                cout << "*";
            }
        }
        for(int col=0; col < 8-row; col++){
            cout << "*";
        }
        cout << endl;
    }
    
    cout << endl;

    return 0;
}


/*

    // Alternate Logic for printing "Fancy Pattern-1" 

    for(int row=0; row<height; row++){
        
        int count = row+1;
        int start_printing = 8-row;
        
        for(int col=0; col<17; col++){

            if(col==start_printing && count!=0){
                cout << row + 1;
                start_printing = start_printing+2;
                count--;
            }
            else{
                cout << "*";
            }

        }
        
        cout << endl;
    }


    cout << endl;

    return 0;
}

*/