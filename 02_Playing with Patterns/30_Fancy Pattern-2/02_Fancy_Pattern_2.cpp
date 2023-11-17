// Fancy Pattern-2 (Type-1) 

#include<iostream>
using namespace std;

int main(){

    cout << endl;
    cout << "\"To Print Fancy Pattern-2 (Type-1)\"" << endl;
    cout << endl; 

    int height; 
    cout << "Enter the height of \"Fancy Pattern-2 (Type-1)\": ";
    cin >> height;

    cout << endl;

    // Logic for printing "Fancy Pattern-2 (Type-1)": 

    int count = 1;

    for(int row=0; row < height; row++){
        for(int col=0; col < 2*(row)+1; col++){
            if(col%2==0){
                cout << count;
                count++;
            }
            else{
                cout << "*";
            }
        }
        cout << endl;
    }

    int start = count-height;
    int n = height-1;

    for(int row=0; row < height; row++){
        int new_count = start;
        for(int col=0; col < 2*(height-row)-1; col++){
            if(col%2==0){
                cout << new_count;
                new_count++;
            }
            else{
                cout << "*";
            }
        }
        start = start - n;
        n--;
        cout << endl;
    }
    
    cout << endl;

    return 0;
}



/*

// Fancy Pattern-2 (Type-2) 

#include<iostream>
using namespace std;

int main(){

    cout << endl;
    cout << "\"To Print Fancy Pattern-2 (Type-2)\"" << endl;
    cout << endl; 

    int height; 
    cout << "Enter the height of \"Fancy Pattern-2 (Type-2)\": ";
    cin >> height;

    cout << endl;

    // Logic for printing "Fancy Pattern-2 (Type-2)": 

    for(int row=0; row < height; row++){
        for(int col=0; col < 2*(row)+1; col++){
            if(col%2==0){
                cout << row+1;
            }
            else{
                cout << "*";
            }
        }
        cout << endl;
    }

    for(int row=0; row < height; row++){
        for(int col=0; col < 2*(height-row)-1; col++){
            if(col%2==0){
                cout << (height-row);
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