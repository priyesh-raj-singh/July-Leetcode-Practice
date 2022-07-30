class Solution {
public:
    int lastStoneWeightII(vector<int>& nums) {
        int n = nums.size();
        int s = accumulate(nums.begin() , nums.end() , 0);
        
        vector<vector<bool>> dp(n+1 , vector<bool> (s/2 +1, false));
        dp[0][0] = true;
        
        for(int i = 0 ; i<=n ; i++)
            dp[i][0] = true;
        
        for(int i = 1 ; i<=n ; i++){
            for(int j = 1 ; j<=s/2 ; j++){
                if(nums[i-1]<=j)
                    dp[i][j] = dp[i-1][j] || dp[i-1][j-nums[i-1]];
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        int x = s/2;
        while(!dp[n][x]) x--;
        return s - 2*x;

		
	}
        
    
};