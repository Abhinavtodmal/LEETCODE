class Solution {
public:
    string removeOccurrences(string s, string part) 
    {
        int n = s.length(), partN = part.length()-1;
        string ans = "";
        for(int i=0; i<n; i++)
        {
            ans.push_back(s[i]);
            if(s[i] == part[partN])
            {
                bool found = true;
                int e = partN;
                for(int j=ans.length()-1; j>=0; j--)
                {
                    if(e < 0) break;
                    if(ans[j] != part[e]) 
                    {
                        found = false;
                        break;
                    }
                    e--;
                }
                if(found && ans.length() >= part.length())
                {
                    for(int k=0; k<part.length(); k++)
                        ans.pop_back();
                }
            }
        }

        return ans;
    }
};