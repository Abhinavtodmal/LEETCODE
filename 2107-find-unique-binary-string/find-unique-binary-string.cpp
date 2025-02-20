class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        
        int n = nums[0].length();

        // generate all the striing 
        for(int i = 0 ; i < (1 << n ) ; i++)
        {
            string candidate  = "";

            for(int j = n-1 ; j >= 0 ; j--)
            {
                candidate += (i >> j) ? '1' : '0';
            }

        

        bool found = false ;
        for(string num : nums )
        {
            if(num == candidate )
            {
                found = true;
                
            }
            
        }
         if (!found) return candidate; 
       
        }
         return "";
    }
};