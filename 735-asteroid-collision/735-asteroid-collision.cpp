class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int> st;
        int n = a.size();
        for(int i = 0; i<n ; i++){
            if(a[i]>0 or st.empty())
                st.push(a[i]);
            
            else{
                while(!st.empty() and st.top()>0 and st.top()<abs(a[i])){
                    
                    st.pop();
                }
                if(!st.empty() and st.top()==abs(a[i]))
                    st.pop();
                 else {
                    if(st.empty() || st.top() < 0) {
                        st.push(a[i]);
                    }
                }
            }
        }
        int m = st.size();
        vector<int> ans(m);
        for(int i = m - 1; i >= 0; i--) {
            ans[i] = st.top();
            st.pop();
        }
        return ans;
        
        
    }
};