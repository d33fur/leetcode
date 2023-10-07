/*
169. Majority Element
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority
 element always exists in the array.
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mapp;
        for(int i : nums) {
            if(mapp.find(i) == mapp.end())
                mapp[i] = 1;
            else
                mapp[i] += 1;
        }
        unordered_map<int,int>::iterator best = max_element(mapp.begin(),mapp.end(),[] (const pair<int,int>& a, const pair<int,int>& b)->bool{ return a.second < b.second; } );
        return best->first;
    }
};