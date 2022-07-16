class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum = 0 ;
        int n = nums.size();
        for(int i = 0 ; i<n ; i++)
            sum+=nums[i];
        if(sum<x) return -1;
        if(sum==x) return n;
        
        int target = sum-x;
        int curr = 0 , start = 0 , maxSize = 0;
        for(int i =0 ; i<n; i++){
            curr+=nums[i];
            
            while(curr > target)
                curr = curr - nums[start++];
            if(curr==target)
                maxSize = max(maxSize , i - start + 1);
        }
        return (maxSize == 0) ? -1 : n - maxSize ;
        
    }
};