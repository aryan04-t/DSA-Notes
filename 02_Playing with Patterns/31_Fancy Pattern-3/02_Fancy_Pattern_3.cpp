// Fancy Pattern-3  

#include<iostream>
using namespace std;

int main(){

    cout << endl;
    cout << "\"To Print Fancy Pattern-3\"" << endl;
    cout << endl; 

    int height; 
    cout << "Enter the approx half height of \"Fancy Pattern-3\": ";
    cin >> height; 

    cout << endl;

    // Logic for printing "Fancy Pattern-3": 

    cout << "*" << endl;

    for(int row=0; row < height; row++){
        int start = row;
        cout << "* ";
        for(int col=0; col < 2*(row)+1; col++){
            if(col<=row){
                cout << col + 1 << " ";
            }
            else{
                cout << start-- << " ";
            }
        }
        cout << "* ";
        cout << endl;
    }

    int n = height-1;
    
    for(int row=0; row < height-1; row++){
        int condition = 2*n-1;
        int start = (condition)/2;
        cout << "* ";
        for(int col=0; col < condition; col++){
            if(col <= (condition)/2){
                cout << col + 1 << " ";
            }
            else{
                cout << start-- << " ";
            }
        }
        n--;
        cout << "* ";
        cout << endl;
    }

    cout << "*" << endl << endl;

    return 0;
}



/*


// Alternate Logic for printing "Fancy Pattern-3" 

// This code takes full height of pattern as input from user, whereas above code takes approx half height of pattern as input 

// This code is really optimized but because it takes full height of the pattern as input, that's why it only works properly for odd number height inputs, for even number height inputs this code generates a little bit off pattern (This is because of the peak shape structure of the pattern) 


#include<iostream>
using namespace std;

int main(){

    cout << endl;
    cout << "\"To Print Fancy Pattern-3\"" << endl;
    cout << endl; 

    int height; 
    cout << "Enter the approx full height of \"Fancy Pattern-3\": ";
    cin >> height; 

    cout << endl;

    // Logic for printing "Fancy Pattern-3": 

    cout << "*" << endl;

    for(int row=0; row < height; row++){

        int condition = (row<=height/2) ? (2*row) : 2*(height-row-1);

        cout << "* ";
        for(int col=0; col <= condition; col++){
            if(col <= condition/2){
                cout << col + 1 << " ";
            }
            else{
                cout << condition-col+1 << " ";
            }
        }
        cout << "* ";
        cout << endl;
    }
    
    cout << "*" << endl << endl;

    return 0;
}


*/