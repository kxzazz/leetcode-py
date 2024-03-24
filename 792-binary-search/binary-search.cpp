class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int m = right - (right - left) / 2;
            if (nums[m] == target)
                return m;
            else if (nums[m] > target)
                right--;
            else
                left++;
        }
        return -1;
    }
};