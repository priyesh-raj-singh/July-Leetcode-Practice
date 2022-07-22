class Solution {
public:
    int integerBreak(int n) {
        int dp[n+1][n];
        for(int i = 0 ; i<n+1 ; i++)
            for(int j = 0 ; j<n ; j++)
                if(i==0 or j==0)
                    dp[i][j] = 1;
        
        for(int i = 1 ; i<n+1 ; i++)
            for(int j = 1; j<n ; j++)
                if(i>=j)
                    dp[i][j] = max(j*dp[i-j][j] , dp[i][j-1]);
        else
            dp[i][j] = dp[i][j-1];
        
        return dp[n][n-1];
        
    }
};