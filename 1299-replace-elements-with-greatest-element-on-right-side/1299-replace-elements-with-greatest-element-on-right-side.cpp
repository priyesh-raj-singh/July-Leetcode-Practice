class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        stack<int> st;
        vector<int> ans(1 , -1);
        int n = arr.size();
        st.push(arr[n-1]);
        for(int i = n-2 ; i>=0 ; i--){
            ans.push_back(st.top());
            
            if(arr[i]>st.top())
                st.push(arr[i]);
            
            
        }
        reverse(ans.begin() , ans.end());
        return ans;
        
    }
};