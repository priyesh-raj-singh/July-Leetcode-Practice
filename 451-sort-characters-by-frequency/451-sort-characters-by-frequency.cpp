class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char , int> mp;
        for(int i = 0 ; i<s.size() ; i++)
            mp[s[i]]++;
        
        string ans;
        vector<pair<int , char>> v;
        for(auto it: mp){
            v.push_back({it.second , it.first});
        }
        sort(v.begin() , v.end());
         
        for(auto i: v){
            while(i.first--){
                ans+=i.second;
            }
        }
        reverse(ans.begin() , ans.end());
        return ans;
        
    }
};