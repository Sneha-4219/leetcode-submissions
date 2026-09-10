class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int area = 0;

        while(left < right) {
            int level = min(height[left], height[right]);
            int width = right - left;

            area = max(area, level * width);

            if(height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return area;
    }
};