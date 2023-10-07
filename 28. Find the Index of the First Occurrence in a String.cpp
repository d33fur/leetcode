/*
28. Find the Index of the First Occurrence in a String
Given two strings needle and haystack, return the index of
the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.length() < needle.length())
            return -1;
        int al = 0;
        for(int i = 0; i < haystack.length(); i++) {
            if (haystack[i] == needle[0] && haystack.length() - i >= needle.length()) {
                al++;
                for (int j = 1; j < needle.length(); j++) {
                    if (haystack[i + j] != needle[j])
                        break;
                    else al++;
                }
                if(al == needle.length())
                    return i;
                else al = 0;
            }
        }
        return -1;
    }
};