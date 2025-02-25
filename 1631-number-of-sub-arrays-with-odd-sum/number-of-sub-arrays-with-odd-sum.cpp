class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        
        // int sum = 0 ;
        // int cnt = 0 ;

        // for (int i = 0 ; i< arr.size() ;i++)
        // {
        //      for (int j = i ; j<arr.size() ; j++)
        // {
        //       sum +=  arr[j];
        //       if(sum % 2 != 0)
        //       {
        //         cnt++;
        //       }
             
        // }
        //  sum  = 0;

        // }
        // return  cnt;

        int odd_cnt = 0 ;
        int even_cnt = 1 ;
       const int MOD = 1e9 + 7;
        int total = 0 ;
        int prefix_sum = 0 ;

        for(int num : arr)
        {
            prefix_sum += num ;

            if(prefix_sum&1)
            {
                total = (total + even_cnt ) % MOD;
                odd_cnt ++;
            }
            else 
            {
                total = (total + odd_cnt ) % MOD;
                even_cnt ++;
            }
        }
        return total;
    }
};