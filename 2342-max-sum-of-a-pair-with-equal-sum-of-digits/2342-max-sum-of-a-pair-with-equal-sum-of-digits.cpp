class Solution {
public:
    int digitSum(int n){
        int rev = 0;
        while(n>0){
            rev += (n%10);
            n = n/10;
        }
        return rev;
    }
    int maximumSum(vector<int>& nums) {
        unordered_map<int , int> mp;
        int ans = -1;
        int n = nums.size();
        for(int i = 0 ; i<n ; i++){
            int sum = digitSum(nums[i]);
            if(mp.find(sum) !=mp.end()){
                int val = nums[mp[sum]];
                ans = max(ans , val + nums[i]);
                if(nums[i]>val)
                    mp[sum] = i;
            }
            else
                mp[sum] = i;
        }
        return ans;
       
        
    }
};