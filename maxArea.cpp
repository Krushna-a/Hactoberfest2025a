class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size(), lp = 0, rp = n-1, maxWater = INT_MIN;
        while(lp < rp){
            int width = rp - lp;
            int ht = min(height[lp], height[rp]);
            int currWater = width * ht;
            maxWater = max(maxWater, currWater);
            height[lp] < height[rp] ? lp++ : rp--;
        }
        return maxWater;
    }
};
