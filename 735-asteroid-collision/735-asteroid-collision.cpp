class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        stack<int> st;
        for(int i = 0 ; i<ast.size() ; i++){
            if(st.empty() or ast[i]>0)
                st.push(ast[i]);
            else{
                while(!st.empty() and st.top()>0 and st.top()<abs(ast[i])){
                    st.pop();
                }
                if(!st.empty() and st.top()==abs(ast[i]))
                    st.pop();
                else{
                    if(st.empty() || st.top() < 0 )
                        st.push(ast[i]);
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