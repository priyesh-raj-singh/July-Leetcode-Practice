class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxi = 0, curr = 1;
        if(nums.size()==0)
            return 0;
        sort(nums.begin() , nums.end());
        for(int i = 1 ; i<nums.size() ; i++){
            if(nums[i] == nums[i-1]+1)
                curr++;
            
            else if (nums[i] != nums[i - 1]){
                maxi = max(maxi , curr);
                curr=1;
            }
        }
        maxi = max(maxi , curr);
        return maxi;
        
    }
};