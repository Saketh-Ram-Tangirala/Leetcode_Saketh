class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
       vector<pair<char,int>> v(indices.size());
    
    for(int i=0;i<indices.size();i++)
    {
        v[i].first=indices[i];
        v[i].second=s[i];
    }
    
    sort(v.begin(),v.end());
    
    string s1="";
    
    for(int i=0;i<s.size();i++)
    {
        s1+=v[i].second;
    }
    return s1;
    }
};