class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> v;
        stack<int> st;
        for(int i = prices.size()-1 ; i>=0 ; i--){
            while(!st.empty() and prices[i]<prices[st.top()])
                st.pop();
            if(st.empty())
                v.push_back(prices[i]);
            else
                v.push_back(prices[i] - prices[st.top()]);
            
            st.push(i);
        }
        reverse(v.begin() , v.end());
        return v;
        
    }
};