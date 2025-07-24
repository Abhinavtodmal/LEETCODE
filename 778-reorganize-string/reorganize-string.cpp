class Solution {
public:
    string reorganizeString(string s) {
        
        int n = s.size();
      unordered_map<char, int> freq;

        for(int i = 0 ; i< n ; i++)
        {
             freq[s[i]]++;
        }

        priority_queue<pair<int, char>> pq ;

        for(auto c : freq)
        {
             pq.push({c.second ,c.first});
        }

        string res ="";
        pair<int ,char> prev ={0 ,'#'} ; 

        while(!pq.empty())
        {
            auto[count , ch ] = pq.top(); pq.pop();
            res += ch;
        

        if(prev.first>0)
        {
            pq.push(prev);
        }
        prev = {count - 1, ch};
        }
        return res.length() == s.length() ? res : "";
    }

};