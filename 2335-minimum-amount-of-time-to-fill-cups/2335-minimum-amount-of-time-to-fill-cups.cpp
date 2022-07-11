class Solution {
public:
    int fillCups(vector<int>& amount) {
        int ans = 0 ;
        sort(amount.begin() , amount.end() , greater<int>());
        while(amount[0]>0){
            ans++;
            amount[1]--;
            amount[0]--;
            sort(amount.begin() , amount.end() , greater<int>());
        }
        return ans;
        
    }
};