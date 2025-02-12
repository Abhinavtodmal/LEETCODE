class Solution {
public:
    int maximumSum(vector<int>& nums) {
        
        unordered_map <int , int > digitSumMap ;
         int maxi = -1 ;
        for(int i = 0 ;i<nums.size() ;i++)
        {
            int digitsum = 0 ;
            int num = nums[i];
           int  temp = num ;

            while(temp > 0)
            {
                digitsum += temp % 10;
                temp = temp/10;
            }

            if(digitSumMap.count(digitsum) )
            {
               maxi = max(maxi, digitSumMap[digitsum] + num );

               digitSumMap[digitsum] = max(digitSumMap[digitsum] ,num);
            }
            else
            {
               digitSumMap[digitsum] = num;
            }
        }
 return maxi ;

    }
};