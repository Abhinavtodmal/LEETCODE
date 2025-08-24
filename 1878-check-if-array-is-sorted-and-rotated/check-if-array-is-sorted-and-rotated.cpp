class Solution {
public:
    bool check(vector<int>& nums) {
        int drop = 0 ;
        for(int i = 0 ; i<nums.size() ; i++)
        {
            if(nums[i] > nums[(i+1) % nums.size()])
            {
                drop++;
            }
            if(drop > 1 )
            {
                return false;
            }
        }
        return true ;
    }
};