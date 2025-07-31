class Solution {
public:
    bool isSubsequence(string s, string t) {
          int prevIndex = -1;  

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        bool found = false;

        
        for (int j = prevIndex + 1; j < t.length(); j++) {
            if (t[j] == ch) {
                prevIndex = j; 
                found = true;
                break;
            }
        }

        
        if (!found) return false;
    }

    return true;
    }
};