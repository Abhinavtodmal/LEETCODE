class Solution {
public:
    char findTheDifference(string s, string t) {
        
        // if(s.empty())
        // {
        //     return t ;
        // }

        unordered_map <char , int > freq ;

        for(char c : s)
        {
            freq[c]++;
        }

        for(char c : t)
        {
            freq[c]--;
           
            if(freq[c] < 0)
            {
                return  c ;
            }
        }
     return '\0';

    }
};