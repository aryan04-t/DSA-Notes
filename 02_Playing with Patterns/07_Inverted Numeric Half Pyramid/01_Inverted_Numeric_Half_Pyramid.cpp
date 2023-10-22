// Inverted Numeric Half Pyramid

#include<iostream> 
using namespace std;

int main(){

    cout << endl;
    cout << "\"To Print Inverted Numeric Half Pyramid Pattern\"" << endl;
    cout << endl;

    int height; 
    cout << "Enter the height of \"Inverted Numeric Half Pyramid\": "; 
    cin >> height; 

    cout << endl;

    // Logic for printing "Inverted Numeric Half Pyramid": 
    for(int row=0; row < height; row++){
        for(int col=0; col < height-row; col++){
            cout << col+1 << " ";
        }
        cout << endl; 
    }

    cout << endl;

    return 0;
}


/*
    // My Different Logic for Printing "Inverted Numeric Half Pyramid": 
    
    for(int row=0; row < height; row++){
        
        int count=1;

        for(int col=height; col > row; col--){
            cout << count << " ";
            count++;
        }

        cout << endl;
    }
*/