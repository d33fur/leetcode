/*
125. Valid Palindrome
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing
 all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.
*/

class Solution {
public:
    bool isPalindrome(string s) {
        unordered_map<char, char> map = {{'Q', 'q'}, {'W', 'w'}, {'E', 'e'}, {'R', 'r'}, {'T', 't'}, {'Y', 'y'},
                                         {'U', 'u'}, {'I', 'i'}, {'O', 'o'}, {'P', 'p'}, {'A', 'a'}, {'S', 's'},
                                         {'D', 'd'}, {'F', 'f'}, {'G', 'g'}, {'H', 'h'}, {'J', 'j'}, {'K', 'k'},
                                         {'L', 'l'}, {'Z', 'z'}, {'X', 'x'}, {'C', 'c'}, {'V', 'v'}, {'B', 'b'},
                                         {'N', 'n'}, {'M', 'm'}, {'!', ' '}, {';', ' '}, {':', ' '}, {',', ' '},
                                         {'.', ' '},{'?', ' '},{'-', ' '},{'@', ' '},{'#', ' '},{'_', ' '},{'\"', ' '},{'{', ' '},{'}', ' '},{'(', ' '},{')', ' '},{'[', ' '},{']', ' '},{'\'', ' '},{'#', ' '},{'`', ' '}};
        for(int i = 0; i < s.length(); i++) {
            if(map.find(s[i]) != map.end())
                s[i] = map[s[i]];
        }
        string str = "";
        for(int i = 0; i < s.length(); i++)
            if(s[i] != ' ')
                str += s[i];

        for(int i = 0, j = str.length()-1; i < str.length()/2; i++, j--)
            if(str[i] != str[j])
                return false;
        return true;
    }
};