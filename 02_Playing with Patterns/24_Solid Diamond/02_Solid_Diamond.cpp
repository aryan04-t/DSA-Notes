// Solid Diamond (Type-1) 

#include<iostream>
using namespace std;

int main(){

    cout << endl;
    cout << "\"To Print Solid Diamond Pattern (Type-1)\"" << endl;
    cout << endl; 

    int height; 
    cout << "Enter the half height of \"Solid Diamond (Type-1)\": ";
    cin >> height;

    cout << endl;

    // Logic for printing "Solid Diamond (Type-1)": 
    for(int row=0; row < height; row++){
        for(int col=0; col < height; col++){
            if(col < height-row-1){
                cout << " ";
            }
            else if(col >= height-row-1){
                cout << "* ";
            }
        }
        cout << endl;
    }

    for(int row=0; row < height; row++){
        for(int col=0; col < height; col++){
            if(col < row){
                cout << " ";
            }
            else if(col >= row){
                cout << "* ";
            }
        }
        cout << endl;
    }

    cout << endl;

    return 0;
}


/*

// Solid Diamond (Type-2) 

#include<iostream>
using namespace std;

int main(){

    cout << endl;
    cout << "\"To Print Solid Diamond Pattern (Type-2)\"" << endl;
    cout << endl; 

    int height;
    cout << "Enter the approximate half height of \"Solid Diamond (Type-2)\": ";
    cin >> height;

    cout << endl;

    // Logic for printing "Solid Diamond (Type-2)": 
    for(int row=0; row < height; row++){
        for(int col=0; col < height+1; col++){
            if(col < height-row){
                cout << " ";
            }
            else if(col >= height-row){
                cout << "* ";
            }
        }
        cout << endl;
    }

    for(int i=0; i<height+1; i++){
        cout << "* ";
    }
    cout << endl;

    for(int row=0; row < height; row++){
        for(int col=0; col < height+1; col++){
            if(col < row+1){
                cout << " ";
            }
            else if(col >= row+1){
                cout << "* ";
            }
        }
        cout << endl;
    }

    cout << endl;

    return 0;
}

*/