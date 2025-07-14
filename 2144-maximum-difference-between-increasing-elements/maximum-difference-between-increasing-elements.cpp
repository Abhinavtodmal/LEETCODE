class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        
        int min_value = nums[0];
        int  max_diff = -1 ;

        for(int i = 1 ; i < nums.size() ; i++)
        {
              if(nums[i] > min_value )
              {
                max_diff = max(max_diff , nums[i] - min_value);
              }
              else 
              {
                min_value = nums[i];
              }
        }
      return max_diff;
    }
};