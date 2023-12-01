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

int main(){

    int num;
    cout << "Enter the Number: ";
    cin >> num;
    
    Solution s;
    int result = s.reverse(num);
    cout << "Reversed Number: " << result << endl;

    return 0;
}