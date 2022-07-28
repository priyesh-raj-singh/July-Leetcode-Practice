class Solution {
public:
    int numSub(string s) {
                int n = s.size();
        int M = 1000000007;
        long ans = 0;
        long count = 0;
        for(int i=0; i<n; i++){
            if(s[i]=='1')
                count++;
            
            
            else{
                ans += (count*(count+1))/2;
                count = 0 ;
                
        }
        }
        ans += (count*(count+1))/2;
        return ans%M;
    }
        
    
};