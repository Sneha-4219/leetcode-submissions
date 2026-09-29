class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m;
        for(int i = 0; i < nums2.size(); i++) {
            m[nums2[i]] = -1;
            for(int j = i + 1; j < nums2.size(); j++) {
                if(nums2[j] > nums2[i]) {
                    m[nums2[i]] = nums2[j];
                    break;
                }
            }
        }

        vector<int> ans(nums1.size());
        for(int i = 0; i < nums1.size(); i++) {
            ans[i] = m[nums1[i]];
        }
        return ans;
    }
};