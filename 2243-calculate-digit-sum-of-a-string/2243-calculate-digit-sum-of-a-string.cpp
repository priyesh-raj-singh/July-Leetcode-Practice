class Solution {
public:
    string sum(string n){
        int an = 0;
        for(int i = 0 ; i<n.size() ; i++){
            an+= (n[i] - '0');
            
        }
        
        return to_string(an);
    }
    string digitSum(string s, int k) {
        while(s.size()>k){
            string tmp;
         for(int i = 0 ; i<s.size() ; i+=k){
             tmp+= sum(s.substr(i , k));
            }
            s = tmp;
        }
        return s;
        
        
    }
};