/*
1. Two Sum
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> map;

        for(int i = 0; i < nums.size(); i++){
            if(map.find(target - nums[i]) == map.end())
                map[nums[i]] = i;
            else
                return {map[target - nums[i]], i};
        }

        return {-1, -1};
    }
};