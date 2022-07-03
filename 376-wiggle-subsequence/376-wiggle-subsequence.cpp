class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int up = 1 ; 
        int down = 1;
        int n = nums.size();
        
        for(int i = 1 ; i<n ; i++){
            if(nums[i]>nums[i-1])
                up = down+1;
            else if(nums[i-1]>nums[i])
                down = up+1;
        }
        int k = max(up , down);
        return min(n , k);
        
    }
};