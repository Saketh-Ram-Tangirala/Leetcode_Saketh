class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
         vector<vector<char>> grid(n,vector<char> (n,'.'));
            solve(grid,0,n,ans);
            return ans;
    }
        void solve(vector<vector<char>>&grid,int cr,int n,vector<vector<string>>&ans)
        {
                if(cr==n)
                {
                        vector<string> tempAns=populate(grid,n);
                        ans.push_back(tempAns);
                        return ;
                }
                for(int cc=0;cc<n;cc++)
                {
                        if(isValid(grid,cr,cc,n))
                        {
                                grid[cr][cc]='Q';
                                solve(grid,cr+1,n,ans);
                                grid[cr][cc]='.';
                        }
                        
                }
                return;
        }
        bool isValid(vector<vector<char>>&grid,int cr,int cc,int n)
        {
                return isrow(grid,cr,n) && iscol(grid,cc,n) && arediag(grid,cr,cc,n);
        }
        bool isrow(vector<vector<char>>&grid,int cr,int n)
        {
                for(int j=0;j<n;j++)
                {
                        if(grid[cr][j]=='Q')
                        {
                                return false;
                        }
                }
                return true;
        }
        bool iscol(vector<vector<char>>&grid,int cc,int n)
        {
                for(int j=0;j<n;j++)
                {
                        if(grid[j][cc]=='Q')
                        {
                                return false;
                        }
                }
                return true;
        }
      bool arediag(vector<vector<char>>&grid,int cr,int cc,int n)
    {
        int i = cr;
        int j = cc;
        while(i>=0 && j>=0) // first diag
        {
            if(grid[i][j]=='Q') return false;
            i--;
            j--;
        }
         i = cr;
         j = cc;
        while(i>=0 && j<n) // second diag
        {
            if(grid[i][j]=='Q') return false;
            i--;
            j++;
        }
         i = cr;
         j = cc;
        while(i<n && j>=0) // third diag
        {
            if(grid[i][j]=='Q') return false;
            i++;
            j--;
        }
         i = cr;
         j = cc;
        while(i<n && j<n) // fourth diag
        {
            if(grid[i][j]=='Q') return false;
            i++;
            j++;
        }
        return true;
    }
        vector<string> populate(vector<vector<char>>&grid,int n)
        {
                vector<string> vec;
                for(int cr=0;cr<n;cr++)
                {
                        string temp="";
                        for(int cc=0;cc<n;cc++)
                        {
                                temp+=grid[cr][cc];
                                
                        }
                        vec.push_back(temp);
                        
                }
                return vec;
        }
};