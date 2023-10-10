/*
70. Climbing Stairs
You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
*/

class Solution {
public:
    int climbStairs(int n) {
        long int last = 1, curr = 1, next = last+curr;
        for(int i = 1; i < n; i++){
            last = curr;
            curr = next;
            next = last+curr;
        }
        return curr;
    }
};