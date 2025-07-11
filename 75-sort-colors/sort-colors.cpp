class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
  for (int i = 0; i < n; i++) {
        // Optimization: check if the array is already sorted
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the current element is greater than the next
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
                swapped = true;
            }
        }

        // If no elements were swapped in the inner loop, array is sorted
        if (!swapped)
            break;
    }      
    }
};