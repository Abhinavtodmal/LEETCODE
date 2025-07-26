class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map < char ,int> mp;
        for(auto letter : s )
        {
            mp[letter]++;
        }

        priority_queue<pair<int , char >> pq ;
        for(auto it = mp.begin() ; it != mp.end() ; ++it)
        {
            pq.push(pair<int, char>(it->second, it->first));

        }

        string ans = "";

        while(!pq.empty())
        {
            int count = pq.top().first;
            char letter = pq.top().second;
              
              pq.pop();

              for(int i = 0 ; i< count ; i++)
              {
                   ans+= letter;
              }
        }
        return ans;
    }
};