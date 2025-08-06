class Solution {
public:
    bool wordPattern(string pattern, string s) {
       stringstream ss(s);
        int i=0;
        vector<int> vec(128);
        unordered_map<string,int> seen;
        for(string word;ss>>word;i++){
   if(i>=pattern.size()) return false;        
   if(vec[pattern[i]]!=seen[word])return false;
            vec[pattern[i]]=i+1;
            seen[word]=i+1;
        } return i==pattern.size();
            }
};