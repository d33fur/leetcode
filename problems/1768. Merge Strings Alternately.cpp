/*
1768. Merge Strings Alternately
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1.
 If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.
*/

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        for(int i = 0, j = 0, k = 0; i < word1.length() + word2.length(); i++) {
            if(j < word1.length()){
                ans+=word1[j];
                j++;
            }
            if(k < word2.length()){
                ans+=word2[k];
                k++;
            }
        }
        return ans;
    }
};