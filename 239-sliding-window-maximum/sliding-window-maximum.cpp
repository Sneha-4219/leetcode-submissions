class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        deque<int> dq;

        // 1st window
        for(int i = 0; i < k; i++) {
            while(dq.size() > 0 && nums[dq.back()] <= nums[i]) {
                dq.pop_back();
            }
            dq.push_back(i);
        }

        // For next windows
        for(int i = k; i < nums.size(); i++) {
            res.push_back(nums[dq.front()]);

            // Removing elements from dq which are not part of current window
            while(dq.size() > 0 && dq.front() <= i - k) {
                dq.pop_front();
            }

            // Remove the smaller values
            while(dq.size() > 0 && nums[dq.back()] <= nums[i]) {
                dq.pop_back();
            }
            dq.push_back(i);
        }

        res.push_back(nums[dq.front()]);

        return res;
    }
};