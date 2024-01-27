class Solution {
public:
    int mod = 1e9 + 7;
    int solve(int n, int k, vector<vector<int>> &dp){
        if(n==0) return 0;
        if(k == 0) return 1;
        if(dp[n][k] != -1) return dp[n][k];
        int cnt = 0;
        for(int i = 0; i<=min(n-1, k); i++){
            cnt += solve(n-1, k-i, dp);
            cnt %= mod;
        }
        
        return dp[n][k] = cnt;
    }
    int kInversePairs(int n, int k) {
        vector<vector<int>>dp(n+1, vector<int>(k+1, -1));
        return solve(n, k, dp);
    }
};