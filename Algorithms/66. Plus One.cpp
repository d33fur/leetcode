/*
66. Plus One
You are given a large integer represented as an integer array digits,
 where each digits[i] is the ith digit of the integer.
 The digits are ordered from most significant to least significant in left-to-right order.
 The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.
*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits[digits.size()-1] += 1;
        if(digits.size() > 1)
            for(int i = digits.size()-1; i > 0; i--) {
                if(digits[i] == 10){
                    digits[i-1]+=1;
                    digits[i] = 0;
                }
                else
                    break;
            }
        if(digits[0] == 10){
            digits[0] = 0;
            vector<int> newvek(digits.size()+1);
            newvek[0] = 1;
            for(int i = 0; i< digits.size(); i++)
                newvek[i+1] = digits[i];
            return newvek;
        }
        return digits;
    }
};