class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        // if(amount==0)
        //     return 0;
        // if(n==1)
        //     return -1;
        int dp[n+1][amount+1];
        
        for(int i = 0 ; i<=n ; i++){
            for(int j = 0 ; j<=amount ; j++){
                if(i==0)
                    dp[i][j] = INT_MAX-1;
                if(j==0)
                    dp[i][j] = 0;
                
                dp[0][0] = INT_MAX -1;
            }
        }
        for(int j = 1; j<amount+1 ; j++){
            if(j%coins[0]==0)
                dp[1][j] = j/coins[0];
            else
                dp[1][j] = INT_MAX - 1;
            dp[1][0] = 0;
        }
        for(int i = 2 ; i<=n ; i++){
            for(int j = 1 ; j<=amount ; j++){
                if(coins[i-1]<=j)
                    dp[i][j] = min(dp[i][j-coins[i-1]]+1 , dp[i-1][j]);
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        int ans =  dp[n][amount];
        if(ans==INT_MAX-1)
            return -1;
        return ans;
        
    }
};