/*
69. Sqrt(x)
Given a non-negative integer x, return the square root of x rounded down to the nearest integer.
 The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.

For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
*/

class Solution {
public:
    int mySqrt(int x) {
        if(x==1)
            return 1;
        long int l = 0, r = x, m = 0;
        while(l<=r) {
            m = l + (r-l)/2;
            if(m*m == x)
                return m;
            if(m*m > x)
                r = m - 1;
            else if(m*m < x)
                l = m + 1;
        }
        if(m*m > x)
            m--;
        return m;
    }
};