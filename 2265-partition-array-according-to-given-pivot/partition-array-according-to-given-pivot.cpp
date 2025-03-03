class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        int n = nums.size() ;
        vector<int> result ;
        vector<int> greater ;
        int cnt = 0;

        for(int i = 0;i < n ; i++)
        {
           if(nums[i] < pivot)
           {
            result.push_back(nums[i]);
           }
           else if(nums[i] == pivot)
           {
               cnt++;
           }
           else
           {
                    greater.push_back(nums[i]);
           }
        }
        
         while(cnt > 0)
         {
             result.push_back(pivot);
             cnt--;
         }

        for(int j = 0 ; j < greater.size() ; j++)
        {
                 result.push_back(greater[j]);
        }
        return result ;
    }
};