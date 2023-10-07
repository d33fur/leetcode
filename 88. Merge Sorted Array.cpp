/*
88. Merge Sorted Array
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order,
 and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function,
 but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n,
 where the first m elements denote the elements that should be merged,
 and the last n elements are set to 0 and should be ignored. nums2 has a length of n.
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans(m+n);
        for(int i = 0, j = 0, k = 0; i <m+n; i++) {
            if(k == n) {
                ans[i] = nums1[j];
                j++;
            }
            else if(j == m) {
                ans[i] = nums2[k];
                k++;
            }
            else if(nums1[j] < nums2[k]) {
                ans[i] = nums1[j];
                j++;
            }
            else{
                ans[i] = nums2[k];
                k++;
            }
        }
        nums1 = ans;
    }
};