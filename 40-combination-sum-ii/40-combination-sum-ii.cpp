class Solution {
public:
    void sum(vector<int>& cand, int target , vector<int> &v , vector<vector<int>> &ans , int index){
        if(target==0){
            ans.push_back(v);
            return ;
        }
        for(int i = index ; i<cand.size() ; i++){
            if(cand[i]>target) break;
            if(i>index and cand[i]==cand[i-1])
                continue;
            v.push_back(cand[i]);
            sum(cand , target - cand[i] , v , ans , i+1);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& cand, int target) {
        sort(cand.begin() , cand.end());
        vector<int> v;
        vector<vector<int>> ans;
        sum(cand , target , v , ans , 0);
        return ans;
        
    }
};