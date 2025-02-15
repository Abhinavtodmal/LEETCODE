class Solution {
public:
    int maximumGap(vector<int>& nums) {
         
         sort(nums.begin() , nums.end());
         int maxi = 0 ;
         if(nums.size() < 2 )
         return 0 ;
          
         for(int i = 1 ; i< nums.size() ; i++)
         {
             maxi = max(nums[i]- nums[i-1] , maxi);
         }
         return maxi ;
    }
};