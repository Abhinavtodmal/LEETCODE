class Solution {
public:
    int alternateDigitSum(int n) {
        
        string num = to_string(n);
        int sum = 0 ;
        int sign = 1;

        for(int i = 0 ;i< num.size() ; i++)
        {
            sum += (num[i]- '0')*sign;
            sign = -sign;
        }
         
         return sum;
    }
};