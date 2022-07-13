class Solution {
public:
    static bool comp(pair<int , int> a , pair<int , int> b )
{
    if(a.second < b.second) return true;
    if(a.second == b.second) 
    {
        if(a.first > b.first)return true;
    }
    return false;
}
    vector<int> frequencySort(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        map<int ,int> m;
	    for(int i = 0 ; i < n; i++){ 
	        m[nums[i]]++;
	    }
	    vector<pair<int , int>> v;
	        for(auto r: m) v.push_back({r.first ,  r.second});
	            
	   sort(v.begin() , v.end() , comp);
	    for(auto r: v)
	        {
	            while(r.second!=0) { 
                    ans.push_back(r.first);
                    r.second--;
                }
	        }
        return ans;
        
    }
};