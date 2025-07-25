class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         
     
        unordered_map<char, int> mp;
        int left = 0, maxLen = 0;

        for (int right = 0; right < s.length(); right++) {
            char ch = s[right];
            
            if (mp.count(ch) && mp[ch] >= left) {
                left = mp[ch] + 1; // move the left pointer
            }

            mp[ch] = right; // update last seen index
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};