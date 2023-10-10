/*
367. Valid Perfect Square
Given a positive integer num, return true if num is a perfect square or false otherwise.

A perfect square is an integer that is the square of an integer. In other words, it is the product of some integer
 with itself.

You must not use any built-in library function, such as sqrt.
*/

class Solution {
public:
    bool isPerfectSquare(int num) {
        long l = 0, r = num;
        while(l <= r) {
            long mid = l + (r-l) / 2;
            if(mid*mid == num)
                return true;
            if(mid*mid < num)
                l = mid + 1;
            else
                r = mid - 1;
        }
        return false;
    }
};