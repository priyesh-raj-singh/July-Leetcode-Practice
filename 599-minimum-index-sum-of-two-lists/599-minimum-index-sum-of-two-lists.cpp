class Solution {
public:
    vector<string> findRestaurant(vector<string>& l1, vector<string>& l2) {
        unordered_map<string , int> mp;
        int minIndex = INT_MAX;
        vector<string> ans;
        for(int i = 0 ; i<l1.size() ; i++)
            mp[l1[i]] = i;
        
        for(int i = 0 ; i<l2.size() ; i++){
            if(mp.find(l2[i])!=mp.end()){
                if(mp[l2[i]]+i<minIndex){
                    minIndex = mp[l2[i]]+i;
                    ans.clear();
                    ans.push_back(l2[i]);
                }
                else if(mp[l2[i]]+i==minIndex)
                    ans.push_back(l2[i]);
            }
        }
        return ans;
        
    }
};