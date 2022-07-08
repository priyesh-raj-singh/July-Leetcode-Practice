class Solution {
public:
    void sum(vector<int> &A , int target , vector<vector<int>> &ans , vector<int> &v , int index){
        if(target==0){
            ans.push_back(v);
            return ;
        }
        
            for(int i = index; i< A.size(); i++){
            if(A[i] > target) break; 
            if(i  > index && A[i] == A[i-1])
                continue;
                
            v.push_back(A[i]);
            sum(A , target-A[i] , ans , v , i+1);
            v.pop_back();
        }


     
    }
    vector<vector<int>> combinationSum2(vector<int>& A, int target) {

        sort(A.begin() , A.end());
        vector<int> v;
        vector<vector<int>> ans;
        sum(A , target , ans , v , 0);
        return ans;
        
        
    }
};