class Solution {
public:
    int search(vector<int>& nums, int target) {
        int first, last, mid, index, pivot = 0;
        vector<int> nums2 = nums;
        stable_sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (nums[0] == nums2[i]) {
                pivot = i;
                break;
            }
        }
        first = 0;
        last = nums.size() - 1;
        while (first <= last) {
            mid = (first + last) / 2;
            if (nums[mid] == target) {
                if (mid + pivot > nums.size() - 1) {
                    return mid + pivot - (nums.size() - 1)-1;
                } else {
                    return mid + pivot;
                }

            } else if (nums[mid] < target) {
                first = mid + 1;
            } else {
                last = mid - 1;
            }
        }
        return -1;
    }
};