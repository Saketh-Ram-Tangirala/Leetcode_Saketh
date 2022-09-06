class Solution {
public:
    bool isPalindrome(string s) {
         for(int i=0; i<s.length(); i++)
    {
        if(s[i]>=65 && s[i]<91)
            s[i]=s[i]+32;
    }
    
	vector<char> v;
    
    //pushing the valid characters in vector
     for(int i=0; i<s.length(); i++)
     {
         if((s[i]>=97 && s[i]<=122) || (s[i]>='0' && s[i]<='9'))
             v.push_back(s[i]);
     }
    for(int i=0, j=v.size()-1; i<j; i++, j--)
    {
        if(v[i]!=v[j])
            return false;
    }
    return true;
    }
};