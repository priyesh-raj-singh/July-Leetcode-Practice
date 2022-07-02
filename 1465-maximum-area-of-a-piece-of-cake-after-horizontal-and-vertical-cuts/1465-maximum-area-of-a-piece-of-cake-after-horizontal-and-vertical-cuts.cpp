class Solution {
public:
    
    const long long int mod = 1000000007;
    int maxArea(int hh, int ww, vector<int>& h, vector<int>& v) {
    
        
        sort(h.begin() , h.end());
        sort(v.begin() , v.end());
        
        vector<int> hi = {h[0]};
        int n = h.size();
        for(int i = 1 ; i<n ; i++)
            hi.push_back(h[i] - h[i-1]);
        
        hi.push_back(hh - h[n-1]);
        
        vector<int> le = {v[0]};
        int m = v.size();
        for(int i = 1; i<m ; i++)
            le.push_back(v[i] - v[i-1]);
        
        le.push_back(ww - v[m-1]);
        
        long long int a = *max_element(hi.begin() , hi.end());
        long long int b = *max_element(le.begin() , le.end());
        return (int)(a%mod * b%mod);
        
    }
};