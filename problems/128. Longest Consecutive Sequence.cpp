/*
128. Longest Consecutive Sequence
Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in O(n) time.
*/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        vector<int> v = nums;
        sort(v.begin(), v.end());
        if(v.size()>0){
            int f = v[0], ans = 0, t = 1;
            for(int i = 1; i < v.size(); i++) {
                if(f+1 == v[i] || f == v[i]) {
                    if(f != v[i]) {
                        t++;
                        f++;
                    }
                }
                else {
                    if(t > ans)
                        ans = t;
                    f = v[i];
                    t = 1;
                }
            }
            if(t > ans)
                ans = t;
            return ans;
        }
        else
            return 0;
    }
};
