// LeetCode (Reverse Integer): 
// https://leetcode.com/problems/reverse-integer/description/ 


#include<iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {

        int reverse_num = 0;
        
        while(x!=0){
            if(reverse_num < INT_MIN/10 || reverse_num > INT_MAX/10) return 0;
            short digit = x % 10;
            reverse_num = ((reverse_num * 10) + digit);
            x /= 10;
        }
        
        return reverse_num; 
    }
};


// Time Complexity (T.C.): O(log(n)) to the base 10 
// -> Here, n is the integer provided in the input and the base is 10 because the integer is getting divided by 10 in each iteration 

// Space Complexity (S.C.): O(1) -> because the code uses a constant amount of extra space regardless of the input size.