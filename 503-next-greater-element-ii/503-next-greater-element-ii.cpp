class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans;
        stack<int> st;
        int n = nums.size();
        for(int i=nums.size()-1;i>=0;i--)
		{
			st.push(i);

		}
        
        for(int i = n-1 ; i>=0 ; i--){
            while(!st.empty() and nums[i]>=nums[st.top()])
                st.pop();
            
            if(st.empty())
                ans.push_back(-1);
            else
                ans.push_back(nums[st.top()]);
            
            st.push(i);
            
        }
        reverse(ans.begin() , ans.end());
        return ans;
        
    }
};