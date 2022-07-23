class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum = accumulate(arr.begin() , arr.end() , 0);
        int curr = 0 , count = 0;
        if(sum%3==0){
            int req = sum/3;
             for(int i=0 ; i<arr.size() ; i++){
                curr+=arr[i];
                if(curr==req){
                    count++;
                    curr = 0;
                }
                
            }
        }
        return count>=3;
        
    }
};