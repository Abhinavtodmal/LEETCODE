class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       unordered_map < char , int > mp ;
      
       int r = ransomNote.size();
       int m = magazine.size();

     
       for(char c : magazine)
       {
           mp[c]++;
       } 

       for(auto c : ransomNote )
       {
          if(mp[c] == 0)
          {
            return false;
          }
           mp[c]--;
       }
       return true;
    }
};