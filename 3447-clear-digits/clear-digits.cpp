class Solution {
public:
    string clearDigits(string s) {
     
     int n = s.size();  
     int cnt = 0 ;
     string result ;

     for(int i = n-1  ; i >= 0 ;i--)
     {
        if(isdigit(s[i]))
        {
            cnt++;
        }
        else
        {
            if(cnt > 0 )
            {
                cnt--;
            }
            else
            {
                result.push_back(s[i]);
            }
        }
     } 

     reverse (result.begin(), result.end());
     return result ;
    }
};