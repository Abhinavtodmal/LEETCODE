#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        unordered_map<int, long long> memo;
        return dfs(questions, 0, memo);
    }

private:
    long long dfs(vector<vector<int>>& questions, int index, unordered_map<int, long long>& memo) {
        if (index >= questions.size()) {
            return 0;
        }
        // Check if the result is already computed
        if (memo.find(index) != memo.end()) {
            return memo[index];
        }
        // Current question's points and brainpower
        int currentPoints = questions[index][0];
        int brainpower = questions[index][1];
        
        // Option 1: Skip the current question
        long long skipPoints = dfs(questions, index + 1, memo);
        
        // Option 2: Answer the current question and skip the next 'brainpower' questions
        int nextQuestionIndex = index + brainpower + 1;
        long long answerPoints = currentPoints + dfs(questions, nextQuestionIndex, memo);
        
        // Store the result in memo before returning
        memo[index] = max(skipPoints, answerPoints);
        return memo[index];
    }
};