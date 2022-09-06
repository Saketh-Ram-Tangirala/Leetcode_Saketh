class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int x=indices.size();
        string w(x,0);
        int i;
        for(i=0;i<x;i++)
        {
          int ch=indices[i];
           w[ch]=s[i];
        }
        return w;
    }
};