bool canPartition(vector<int>& nums) {
int n = nums.size();
int sum=0;
for(int i=0;i<n;i++){
sum=sum+nums[i];
}
int a=0;
if(sum%2!=0){return false;
}
else{
sum = sum/2;
}
return subSetSum(nums , sum , n);
}
bool subSetSum(vector<int> &nums , int sum , int n){
bool dp[n+1][sum+1];
dp[0][0]=true;
for(int i=0;i<=n;i++){
for(int j=0;j<=sum;j++){
if(i==0 || j==0)
dp[i][j] = false;
else if(nums[i-1] > j)
dp[i][j] = dp[i-1][j];
else if(nums[i-1]==j)
dp[i][j] = true;
else
dp[i][j] = dp[i-1][j] || dp[i-1][j-nums[i-1]];
}
}
return dp[n][sum];
}