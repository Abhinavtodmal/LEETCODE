class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        // int sum = nums[0];
        // int absolute_val = 0;
        // for(int i = 1 ; i<nums.size() -1 ;i++ )
        // {
        //     sum += nums[i];
           
        //    absolute_val =abs ( sum ) 

        //     if(sum += nums[i+1] > absolute_val )
        //     {
        //         // then only perform the addition/ sum 
        //     }
        //     else
        //     {
        //         sum -= nums[i-1];
        //     }
        // }

        int max_sum = 0;  int min_sum = 0;  int current_max = 0;   int current_min = 0;

        for(int num : nums)
        {
            current_max = max(num, current_max + num);
            current_min = min(num, current_min + num);

            max_sum = max(max_sum , current_max);
            min_sum = min(min_sum , current_min);

        }
           return max(max_sum , abs(min_sum));
    }
};