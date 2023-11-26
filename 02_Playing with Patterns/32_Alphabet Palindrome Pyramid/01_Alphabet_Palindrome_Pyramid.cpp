// Alphabet Palindrome Pyramid  

#include<iostream>
using namespace std;

int main(){

    cout << endl;
    cout << "\"To Print Alphabet Palindrome Pyramid\"" << endl;
    cout << endl; 

    int height; 
    cout << "Enter the height of \"Alphabet Palindrome Pyramid\": ";
    cin >> height; 

    cout << endl;

    // Logic for printing "Alphabet Palindrome Pyramid": 

    for(int row = 0; row < height; row++){
    
        char a = char(64); 
    
        for(int col = 0; col < (2*row)+1; col++){
            if(col <= row){
                a = char(a+1);
                cout << a << " ";
            }
            else{
                a = char(a-1);
                cout << a << " ";
            }
        }

        cout << endl;
    
    }

    cout << endl;

    return 0;
}