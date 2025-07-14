class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        
       int max_diff = -1;

        for(int i = 0 ; i < nums.size() ; i++)
        {
            for(int j = i+1 ; j< nums.size()  ;j++)
            {
                if(nums[i] < nums[j])
                {
                   max_diff = max(max_diff,nums[j] - nums[i] );
                }
            }
        }
        return max_diff;
    }
};