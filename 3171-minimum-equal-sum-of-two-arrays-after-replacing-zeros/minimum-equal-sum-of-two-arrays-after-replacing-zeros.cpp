class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1 = 0, sum2 = 0;
        int zero1 = 0, zero2 = 0;

        for (int x : nums1) {
            if (x == 0) zero1++;
            else sum1 += x;
        }

        for (int x : nums2) {
            if (x == 0) zero2++;
            else sum2 += x;
        }

        // total minimal possible sums (if all 0s replaced with 1)
        long long minSum1 = sum1 + zero1 * 1;
        long long minSum2 = sum2 + zero2 * 1;

        // If both sides have zeros, we can always equalize by proper allocation
        if (zero1 > 0 && zero2 > 0) {
            return max(minSum1, minSum2);
        }

        // If only nums1 has zeros
        if (zero1 > 0) {
            long long diff = sum2 - sum1;
            if (diff < zero1) return -1;
            return sum2;
        }

        // If only nums2 has zeros
        if (zero2 > 0) {
            long long diff = sum1 - sum2;
            if (diff < zero2) return -1;
            return sum1;
        }

        // No zeros at all
        return sum1 == sum2 ? sum1 : -1;
    }
};
