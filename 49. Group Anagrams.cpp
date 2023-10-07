/*
49. Group Anagrams
Given an array of strings strs, group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase,
typically using all the original letters exactly once.
*/

class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::vector<std::vector<std::string>> ans;
        std::unordered_map<std::string, int> mapp;
        for(int i = 0, j = 0; i < strs.size(); i++) {
            std::string tempstr = strs[i];
            sort(tempstr.begin(), tempstr.end());
            if(mapp.find(tempstr) != mapp.end()) {
                ans[mapp[tempstr]].push_back(strs[i]);
            }
            else {
                mapp[tempstr] = j;
                ans.push_back({strs[i]});
                j++;
            }
        }
        return ans;
    }
};