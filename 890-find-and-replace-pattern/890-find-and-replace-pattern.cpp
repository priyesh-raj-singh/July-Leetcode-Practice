class Solution {
public:
   bool solve(string s1,string s2)
{
map<char,char>mp;
for(int i=0;i<s1.size();i++)
{
if(mp.find(s1[i])!=mp.end())
{
if(mp[s1[i]]!=s2[i])
return false;
}
else
{
mp[s1[i]]=s2[i];
}
}
return true;
}

vector<string> findAndReplacePattern(vector<string>& words, string pattern) 
{
    vector<string>ans;
    for(string s:words)
    {
        if(solve(s,pattern) && solve(pattern,s))
            ans.push_back(s);
    }
    return ans;
}
};