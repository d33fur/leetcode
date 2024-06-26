/*
58. Length of Last Word
Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal
substring
 consisting of non-space characters only.
*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length()-1, flag = 0, k = 0;
        while(i >= 0) {
            if(s[i] == ' ' && flag)
                break;
            if(s[i] != ' ') {
                flag = 1;
                k++;
            }
            i--;
        }
        return k;
    }
};