// Hollow Inverted Half Pyramid 

#include<iostream> 
using namespace std;

int main(){

    cout << endl;
    cout << "\"To Print Hollow Inverted Half Pyramid Pattern\"" << endl;
    cout << endl;

    int height;
    cout << "@ Enter the height of \"Hollow Inverted Half Pyramid\": ";
    cin >> height;

    cout << endl;
    
    // Logic for printing "Hollow Inverted Half Pyramid": 
    for(int row=0; row < height; row++){
        for(int col=0; col < height-row; col++){
            if(row==0 || row==height-1){
                cout << "*";
            }
            else{
                if(col==0 || col==height-row-1){
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    cout << endl;

    return 0;
}