// Fancy Pattern-4  

#include<iostream>
using namespace std;

int main(){

    cout << endl;
    cout << "\"To Print Fancy Pattern-4\"" << endl;
    cout << endl; 

    int n; 
    cout << "Enter the height of \"Fancy Pattern-4\": ";
    cin >> n; 


    // This is the logic that I built when I tried to write code for this pattern 1st time 

    // Logic for printing "Fancy Pattern-4": 
    if(n > 19 && n < 1){
        cout << endl;
        cout << "Value of height cannot be less than 1 or more than 19." << endl;
        cout << "Enter a valid value for \"Height\"." << endl;
        cout << endl;
        return 0;
    }

    cout << endl;

    for(int row=0; row < n; row++){
        
        for(int col=0; col < row; col++){
            cout << "  ";
        }
        
        int count = 10;

        for(int col=0; col < 2*(n-row)-1; col++){
            if(col == 0){
                cout << "05";
            }
            else if(col%2 == 0){
                cout << count;
                count = count+5;
            }
            else{
                cout << "  ";
            }
        }

        cout << endl;      
    }


    for(int row=0; row < n-1; row++){
        
        for(int col=0; col < n-2-row; col++){
            cout << "  ";
        }
        
        int count = 10;

        for(int col=0; col < 2*(row+1)+1; col++){
            if(col == 0){
                cout << "05";
            }
            else if(col%2 == 0){
                cout << count;
                count = count+5;
            }
            else{
                cout << "  ";
            }
        }

        cout << endl; 
    }

    cout << endl;

    return 0;
}



/*

// Then I thought I can optimize my above written logic using ternary operator, because above writte code has repetitive code in the 2 row for loops: 

// Then I optimized my above written logic 


    for(int row=0; row < (2*n)-1; row++){
        
        int count = 10;

        int condition_1 = (row < n) ? row : 2*(n-1)-row;
        int condition_2 = (row < n) ? 2*(n-row)-1 : 2*(row-n+1)+1;
    
        for(int col=0; col < condition_1; col++){
            cout << "  ";
        }
        
        for(int col=0; col < condition_2; col++){
            if(col == 0){
                cout << "05";
            }
            else if(col%2 == 0){
                cout << count;
                count = count+5;
            }
            else{
                cout << "  ";
            }
        }

        cout << endl;      
    
    }

*/