/*
3. Longest Substring Without Repeating Characters
Given a string s, find the length of the longest 
substring
 without repeating characters.
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        std::vector<char> str;
        bool f = false;
        for(int i = 0; i < s.length(); i++) {
            int temp = str.size();
            for(int j = 0; j < str.size(); j++)
                if(str[j] == s[i]) {
                    temp = j;
                    f = true;
                    break;
                }
            if(f){
                f = false;
                str.erase(str.begin(), str.begin()+temp+1);
                str.push_back(s[i]);
            }
            else
                str.push_back(s[i]);
            if(str.size() > ans)
                ans = str.size();
        }
        return ans;
    }
};
