class Solution {
public:
    
    int maximumScore(int a, int b, int c) {
        int ans = 0 ;
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin() , v.end() , greater<int>());
        
        while(v[0]>=0 and (v[1]!=0 or v[2]!=0)){
            ans++;
            v[0]--;
            v[1]--;
            sort(v.begin() , v.end() , greater<int>());
        }
        return ans;
        
    }
};