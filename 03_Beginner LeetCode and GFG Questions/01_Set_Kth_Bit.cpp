// GeeksforGeeks (Set kth bit): 
// https://practice.geeksforgeeks.org/problems/set-kth-bit3724/1


#include<iostream>
using namespace std;


// Loop Approach 
class Solution{
public:
    int setKthBit(int N, int K){
        int number = 1;
        while(K!=0){
            number = number * 2;
            K--;
        }
        return (N | number);
    }
};


/*

// Alternate Left-Shift Operator Approach 
class Solution{
public:
    int setKthBit(int N, int K){
        return (N | (1<<K));
    }
};

*/

int main(){

    int num;
    cout << "Enter the Number: ";
    cin >> num;
    
    int kthBit;
    cout << "Enter the Bit: ";
    cin >> kthBit;

    Solution s;
    int result = s.setKthBit(num, kthBit);
    cout << "Number after setting the Kth Bit: " << result << endl;

    return 0;
}