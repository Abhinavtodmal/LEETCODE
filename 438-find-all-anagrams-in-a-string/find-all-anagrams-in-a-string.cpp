class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int> result ;
        int n = s.size();
        int m = p.size();

        if(m > n )return result ;
        
        unordered_map <char , int> s_map , p_map  ;
        for(char c : p)
        {
          p_map[c]++;
        }
         
          // Initialize the first window in s
        for(int i = 0 ; i< m ; i++)
        {
            s_map[s[i]]++;
        }

        if(s_map == p_map )
        {
            result.push_back(0);
        }
        
         for (int i = m; i < n; i++) {
        s_map[s[i]]++;         // Add new character
        s_map[s[i - m]]--;     // Remove old character

        // Remove the character if its count is 0 to keep hashmap clean
        if (s_map[s[i - m]] == 0) s_map.erase(s[i - m]);

        if (s_map == p_map) result.push_back(i - m + 1); // If anagram found, store index
    }

    return result;
    }
};