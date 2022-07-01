class Solution {
public:
        bool static cmp(vector<int> &a,vector<int> &b){
        return (a[1]>b[1]);
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),cmp);
        int ans=0; 
		
        for(int i=0;i<boxTypes.size();i++){
            int box_count=min(boxTypes[i][0],truckSize);
            ans+=box_count*boxTypes[i][1];
            truckSize-=box_count;
            if(truckSize==0)
                break;
        }
        return ans;
    
        
    }
};