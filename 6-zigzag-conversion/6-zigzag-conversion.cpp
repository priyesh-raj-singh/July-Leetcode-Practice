class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> t(numRows , "");
        if(numRows<=1) return s;
        int row = 0 , step = 1;
        for(int i = 0 ; i<s.size() ; i++){
            t[row] +=s[i];
            if(row==0) step = 1;
            if(row == numRows - 1) step = -1;
            row+=step;
        }
        string ans ;
        for(auto it : t)
            ans+=it;
        return ans;
        
    }
};