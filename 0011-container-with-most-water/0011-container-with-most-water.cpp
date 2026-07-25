class Solution {
public:
    int maxArea(vector<int>& height) {
        int right = height.size()-1, left = 0;
        int vol = 0;
        while(left<right){
            int h = min(height[left],height[right]);
            int w = right - left;
            if(h*w > vol){
                vol = h*w;
            }
            if(height[left]<height[right]) left++;
            else right--;
        }
        return vol;
    }
};