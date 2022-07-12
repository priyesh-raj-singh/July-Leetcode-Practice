class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0 ;
        for(int i : nums)
            sum+=i;
        if(abs(target)>sum or (target+sum)%2!=0)
            return 0;
        int s1 = (target+sum)/2;
        return CountSubSets(nums , s1);
        
    }
    int CountSubSets(vector<int> &nums , int s1){
        int n = nums.size();
        int dp[n+1][s1+1];
        dp[0][0] = 1;
        for(int i = 1 ; i<=s1 ; i++)
             dp[0][i] = 0;
        
        for(int i = 1 ; i<=n ; i++){
            for(int j = 0 ; j<=s1 ; j++){
                if(nums[i-1]<=j){
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-nums[i-1]];
                }
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        return dp[n][s1];
    }
};