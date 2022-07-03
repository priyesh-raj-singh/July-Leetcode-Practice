class Solution {
public:
    bool canPlaceFlowers(vector<int>& v, int n) {
       v.insert(v.begin() , 0);
        v.push_back(0);
        for(int i = 0 ; i<v.size()-2 ; i++){
            if(v[i]+v[i+1] + v[i+2]==0)
            {
                n--;
                i++;
            }
        }
        return n<=0;
        
    }
};