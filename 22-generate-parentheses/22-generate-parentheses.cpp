class Solution {
public:
     vector<string> ans;
    void generatePara(int n, int open, int close, string s)
    {
        if(open==n && close==n)
        {
            ans.push_back(s);
            return;
        }
        if(open<n)
        {
            generatePara(n, open+1, close, s+"(");
        }
        if(close<open)
        {
            generatePara(n, open, close+1, s+")");
        }
    }
    vector<string> generateParenthesis(int n) {
        generatePara(n, 0, 0, "");
        return ans;
    }

};