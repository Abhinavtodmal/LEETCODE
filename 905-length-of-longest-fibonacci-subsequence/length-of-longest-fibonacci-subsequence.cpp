class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        unordered_map<int, bool> hashMap;
    for (int num : arr) {
        hashMap[num] = true; // Storing elements in hashmap for quick lookup
    }

    int maxLen = 0;

    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            int a = arr[i], b = arr[j];
            int cnt = 2; // Start with two numbers

            while (hashMap.find(a + b) != hashMap.end()) {
                int next = a + b;
                a = b;
                b = next;
                cnt++; // Increment count if next Fibonacci-like number exists
            }

            maxLen = max(maxLen, cnt); // Update max length found
        }
    }

    return maxLen > 2 ? maxLen : 0; // Return 0 if no valid Fibonacci-like sequence found 
    }
};