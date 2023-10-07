/*
1071. Greatest Common Divisor of Strings
For two strings s and t, we say "t divides s" if and only if s = t + ... + t (i.e., t is concatenated with itself one or more times).

Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.
*/

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string ans = "";
        int i = 0;
        while(i < str1.length() && i < str2.length()) {
            if(str1[i] == str2[i]) ans+=str1[i];
            else break;
            i++;
        }
        if(ans != "") {
            while ((str1.length() % ans.length()) != 0 || (str2.length() % ans.length()) != 0)
                ans.pop_back();
            string temp = "";
            int size = str1.length() / ans.length();
            for(int i = 0; i < size; i++)
                temp+=ans;
            if(str1 != temp)
                return "";
            size = str2.length() / ans.length();
            temp = "";
            for(int i = 0; i < size; i++)
                temp+=ans;
            if(str2 != temp)
                return "";
        }
        return ans;
    }
};