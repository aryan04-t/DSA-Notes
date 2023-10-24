// Hollow Square  

#include<iostream> 
using namespace std;

int main(){

    cout << endl;
    cout << "\"To Print Hollow Square Pattern\"" << endl << endl;

    int length;
    cout << "@ Enter its side's length: ";
    cin >> length;

    cout << endl;

    // Logic for printing "Hollow Square": 
    for(int row=0; row < length; row++){
        for(int col=0; col < length; col++){
            if(row==0 || row==length-1){
                cout << "* ";
            }
            else{
                if(col==0 || col==length-1){
                    cout << "* ";
                }
                else{
                    cout << "  ";
                }
            }
        }
        cout << endl;
    } 

    cout << endl; 

    return 0;
}