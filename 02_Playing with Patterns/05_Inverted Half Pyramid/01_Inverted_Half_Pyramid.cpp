// Inverted Half Pyramid

#include<iostream> 
using namespace std;

int main(){

    cout << endl;
    cout << "\"To Print Inverted Half Pyramid Pattern\"" << endl;
    cout << endl;

    int height; 
    cout << "Enter the height of \"Inverted Half Pyramid\": "; 
    cin >> height; 

    cout << endl;

    // Logic for printing "Inverted Half Pyramid": 
    for(int row=0; row < height; row++){
        for(int col=0; col < height-row; col++){
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;
    
    return 0;
}


/*
    // My Different Logic for printing "Inverted Half Pyramid": 

    for(int row=0; row < height; row++){
        for(int col=height; col>row; col--){
            cout << "* ";
        }
        cout << endl;
    }
     
*/



/*

@ Tip for Pyramid Pattern Problems: 

---> 1st, check the number of rows and write an outer loop for it. 

---> 2nd, now see the given values: "height of pyramid", "occurrences of the symbol in a row" with respect to the "row number", see the "column value", and establish a formula using your common sense by seeing the pattern in these given values. 

---> Now once you have the formula that you have to apply in the inner loop as a condition, the question is solved. 

*/