class Solution {
public:
    int countHomogenous(string s) {
       int n = s.size();
        int M = 1000000007;
        long ans = 0;
        for(int i=0; i<n; i++){
            long count = 1;
            while(i+1 < n && s[i] == s[i+1]){
                count++;
                i++;
            }
            ans += (count*(count+1))/2;
        }
        return ans%M;
    }
};