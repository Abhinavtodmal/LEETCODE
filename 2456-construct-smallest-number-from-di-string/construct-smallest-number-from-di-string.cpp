class Solution {
public:
    string smallestNumber(string pattern) {
        
        int n = pattern.length();
        int currentDigit = 1 ;
        stack <int> st ;
        string result ; 

        for(int i = 0 ; i <= n ; i++)
        {
            st.push(currentDigit++);

            if(pattern[i] == 'I' || i == n)
            {
                while(!st.empty())
                {
                    result += to_string(st.top());
                    st.pop();
                }
            }
        }
        return result ;
    }
};