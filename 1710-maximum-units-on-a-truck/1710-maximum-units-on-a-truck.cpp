class Solution {
public:
    bool static cmp(vector<int> &a , vector<int> &b){
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& box, int truckSize) {
        int ans = 0 ;
        sort(box.begin() , box.end() , cmp);
        for(int i = 0 ; i<box.size() ; i++){
            int boxCount = min(box[i][0] , truckSize);
            ans+=boxCount * box[i][1];
            truckSize-=boxCount;
            if(truckSize==0)
                break;
            
        }
        return ans;
        
       
        
    }
};