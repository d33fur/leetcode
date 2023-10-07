/*
9. Palindrome Number
Given an integer x, return true if x is a palindrome, and false otherwise.
*/

class Solution {
public:
    bool isPalindrome(int x) {
        std::string temp = std::to_string(x);
        int len = temp.length();
        for(int i = 0, j = len-1; i < (len/2); i++, j--) {
            if(temp[i] != temp[j])
                return false;
        }
        return true;
    }
};