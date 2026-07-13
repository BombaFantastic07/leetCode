class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int count = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] == 0) {
                count = 0;
                continue;
            }
            count++;
            if (count >= max) {
                max = count;
            }
        }
        return max;
    }
};