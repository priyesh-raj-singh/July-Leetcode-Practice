class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int maxi =  0 , count = 0;
        for(int i = 0 ; i<nums.size()-1 ; i++){
            if(nums[i]<nums[i+1])
                count++;
            else{
                maxi = max(maxi , count);
                count = 0;
            }
            maxi = max(maxi , count);
        }
        
        
        return maxi+1;
        
    }
};