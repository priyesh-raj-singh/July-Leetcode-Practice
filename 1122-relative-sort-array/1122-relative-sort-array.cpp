class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int , int> mp;
        for(int i =0 ; i<arr1.size() ; i++)
            mp[arr1[i]]++;
        int po = 0;
        for(int j = 0 ; j<arr2.size() ; j++){
            while(mp[arr2[j]]-->0)
                arr1[po++] = arr2[j];
        }
        for(auto it: mp){
            while(it.second-- >0)
                arr1[po++] = it.first;
        }
        return arr1;
        
    }
};