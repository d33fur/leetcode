/*
1385. Find the Distance Value Between Two Arrays
Given two integer arrays arr1 and arr2, and the integer d, return the distance value between the two arrays.

The distance value is defined as the number of elements arr1[i] such that there is not any element arr2[j] where |arr1[i]-arr2[j]| <= d.
*/

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans = 0;
        for(int i = 0; i < arr1.size(); i++) {
            for(int j = 0; j < arr2.size(); j++)
                if(abs(arr1[i]-arr2[j]) <= d) {
                    ans++;
                    break;
                }
        }
        return arr1.size() - ans;
    }
};