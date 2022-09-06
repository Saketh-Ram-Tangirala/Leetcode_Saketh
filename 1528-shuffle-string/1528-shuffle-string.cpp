class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
       vector<pair<char,int>> v(indices.size());
        int n=indices.size();
        for(int i=0;i<n;i++)
        {
            v[i].first=indices[i];
            v[i].second=s[i];
        }
        sort(v.begin(),v.end());
        string str;
        for(int i=0;i<v.size();i++)
        {
            str+=v[i].second;
        }
        return str;
    }
};