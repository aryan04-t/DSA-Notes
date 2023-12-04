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


// T.C.: O(log(n)) to the base 2 -> A number "n" can be represted by using "log(n) to the base 2" number of bits in binary, and in worst case to set the left most bit the loop will iterate "log(n) to the base 2" times 

// S.C.: O(1) -> Constant Space 

// Here, n is the input number named "N" 