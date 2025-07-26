class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

      unordered_map<string , vector<string>> mp;

      for(auto x : strs)
      {
        string word = x ;
        sort(word.begin(),word.end());
        mp[word].push_back(x);
      }   
      
      vector<vector<string>> ans ;
      for(auto m : mp)
      {
        ans.push_back(m.second);
      }
      return ans;
    }
};