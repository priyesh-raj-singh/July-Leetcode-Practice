class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        sort(grades.begin() , grades.end());
        int prevSum = 0 , currSum = 0;
        int currCount = 0 , prevCount = 0;
        int ans = 0;
        
        for(int i = 0 ; i<grades.size() ; i++){
            currSum+=grades[i];
            currCount++;
            if(currSum > prevSum and currCount > prevCount){
                ans++;
                prevSum = currSum;
                prevCount = currCount ;
                currCount = 0;
                currSum = 0;
                
            }
        }
        return ans;
    }
};