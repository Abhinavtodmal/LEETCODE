class Solution {
public:
    int climbStairs(int n) {
    
    if (n<= 2 )
    {
        return n ;
    }

    vector<int> dp(n+1);

    dp[1] = 1 ;
    dp[2] = 2 ;

    for(int i = 3 ; i <= n ; i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
    }
};

// Memoization 
// class Solution {
// public:

//     int solve(int n, vector<int>& dp)
//     {
//         // base case
//         if(n <= 2)
//             return n;

//         // if already calculated
//         if(dp[n] != -1)
//             return dp[n];

//         // store and return
//         dp[n] = solve(n-1, dp) + solve(n-2, dp);

//         return dp[n];
//     }

//     int climbStairs(int n) {

//         vector<int> dp(n+1, -1);

//         return solve(n, dp);
//     }
// };