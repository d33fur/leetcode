/*
605. Can Place Flowers
You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted
 in adjacent plots.

Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n,
 return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule and false
 otherwise.
*/

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(flowerbed.size() != 0) {

            if(flowerbed.size() == 1) {
                if (flowerbed[0] == 0 && n > 0) {
                    flowerbed[0] = 1;
                    n--;
                }
            }
            else {
                if(flowerbed[0] == 0 && flowerbed[1] == 0 && n > 0){
                    flowerbed[0] = 1; n--;
                }
                if(flowerbed.size() > 2)
                    for(int i = 1; i < flowerbed.size()-1; i++)
                        if(flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0 && n > 0) {
                            flowerbed[i] = 1; n--;
                        }
                if(flowerbed[flowerbed.size()-1] == 0 && flowerbed[flowerbed.size()-2] == 0 && n > 0){
                    flowerbed[0] = 1; n--;
                }
            }
        }
        if(n == 0)
            return true;
        else
            return false;
    }
};