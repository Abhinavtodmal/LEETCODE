class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {

    int sum = nums[0];
      int maxi = 0;

      if(nums.size() ==1 )
      {
        return nums[0];
      }

      

      for(int i = 1 ; i< nums.size() ;i++)
      {
         if(nums[i] > nums[i -1])
         {
            sum += nums[i];
           
         }
             else
             {
            maxi = max(maxi , sum);

            sum = nums[i];  
             }
          
           
           
         
      } 
      return max(maxi ,sum ); 
    }
};