class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> temp;
        string str;
           
        for(int i=0;i<nums.size();i++)
        {
            temp.push_back(to_string(nums[i]));
            
        }
        sort(temp.begin(),temp.end(),comp);
        for(auto it:temp)
        {
            str+=it;
        }
          if (str[0] == '0') return "0";
        return str;
    }
    static bool comp(string &a,string &b)
    {
        if(a+b>b+a)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};