class Solution {
public:
    bool isAnagram(string s, string t) {
         
         unordered_map<char ,int> mp ;
        
        if(s.length() != t.length()) return false;

         for(auto it : s )
         {
            mp[it]++;
         }

         for(auto c : t)
         {
             mp[c]--;
         }

         
          for(auto it : mp) {
            if(it.second != 0) return false;
        }
         return true;
    }
};