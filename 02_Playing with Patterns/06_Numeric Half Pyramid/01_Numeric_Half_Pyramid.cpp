// Numeric Half Pyramid 

#include<iostream> 
using namespace std;

int main(){

    cout << endl; 
    cout << "\"To Print Numeric Half Pyramid Pattern\"" << endl; 
    cout << endl; 

    int height; 
    cout << "Enter the height of \"Numeric Half Pyramid\": "; 
    cin >> height; 

    cout << endl; 

    // Logic for printing "Numeric Half Pyramid": 
    for(int row=0; row < height; row++){
        for(int col=0; col < row+1; col++){
            cout << col+1 << " ";   
        }
        cout << endl;
    }

    cout << endl;
    
    return 0;
}


/*
    // My Different Logic for Printing "Numeric Half Pyramid": 

    for(int row=0; row < height; row++){

        int count=1;

        for(int col=0; col < row+1; col++){
            cout << count << " ";
            count++;
        }

        cout << endl;
    }
*/