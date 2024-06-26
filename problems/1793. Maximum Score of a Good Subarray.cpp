/*
1793. Maximum Score of a Good Subarray
You are given an array of integers nums (0-indexed) and an integer k.

The score of a subarray (i, j) is defined as min(nums[i], nums[i+1], ..., nums[j]) * (j - i + 1). A good subarray is a subarray where i <= k <= j.

Return the maximum possible score of a good subarray.
*/

class Solution {
public:
    int maximumScore(std::vector<int>& nums, int k) {
        int l = k, r = k;
        int m = nums[k];
        int score = m;
        while (l > 0 || r < nums.size() - 1) {
            (l == 0 || (r < nums.size() - 1 && nums[r + 1] > nums[l - 1])) ? r++ : l--;
            m = std::min(m, std::min(nums[l], nums[r]));
            score = std::max(score, m * (r - l + 1));
        }
        return score;
    }
};
