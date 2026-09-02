class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int minVal = nums[0];
        int ans = -1;

        for(int j = 1; j < nums.size(); j++) {
            if(nums[j] > minVal) {
                ans = max(ans, nums[j] - minVal);
            }

            minVal = min(nums[j], minVal);
        }
        return ans;
    }
};