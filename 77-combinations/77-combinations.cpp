class Solution {
public:
    void combination(int n , int k , vector<int> &v , vector<vector<int>> &ans , int i){
        if(v.size()==k){
            ans.push_back(v);
            return ;
        }
        while(i<=n){
            v.push_back(i);
            combination(n, k, v, ans,i+1);
            i++;
            v.pop_back();
        }
        
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> v;
        vector<vector<int>> ans;
        combination(n , k , v, ans, 1);
        return ans;
        
    }
};