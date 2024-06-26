/*
345. Reverse Vowels of a String
Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.
*/

class Solution {
public:
    string reverseVowels(string s) {
        int size = s.length(), l = 0, r = size-1, lready = 0, rready = 0;
        unordered_map<char, int> map = {{'a',1}, {'e',1}, {'i',1}, {'o',1}, {'u',1},{'A',1}, {'E',1}, {'I',1}, {'O',1}, {'U',1}};
        for(int i = 0, j = size-1; i < j;){
            if(map.find(s[i]) != map.end()) {
                l = i;
                lready = 1;
            }
            else
                i++;
            if(map.find(s[j]) != map.end()) {
                r = j;
                rready = 1;
            }
            else
                j--;
            if(lready && rready) {
                std::swap(s[l], s[r]);
                lready = 0, rready = 0;
                i++;
                j--;
            }
        }
        return s;
    }
};