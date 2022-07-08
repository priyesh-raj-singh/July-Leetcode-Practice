// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    void sum(vector<int> &A, int B, vector<vector<int>> &ans , vector<int> &v , int i){
        if(B==0){
            ans.push_back(v);
            return ;
        }
        while(i<A.size() and B-A[i]>=0){
            v.push_back(A[i]);
            sum(A , B - A[i] , ans , v , i);
            i++;
            v.pop_back();
        }
    }
    vector<vector<int> > combinationSum(vector<int> &x, int B) {
        // Your code here
        sort(x.begin() , x.end());
        set<int> s;
        for(int i = 0 ; i<x.size() ; i++){
            s.insert(x[i]);
        }
        vector<int> A;
        for(auto it: s){
            A.push_back(it);
        }
        vector<int> v;
        vector<vector<int>> ans;
        sum(A , B , ans , v , 0);
        return ans;
        
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	  // } Driver Code Ends