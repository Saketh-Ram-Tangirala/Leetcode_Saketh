class Solution {
public:
    string countAndSay(int n) {
         string prev = "1";
        for(int i = 2; i <= n; i++){
            int l = 0;
            int r = 0;
            string tmp;
            while(r < prev.size()){
                while(r < prev.size() && prev[l] == prev[r]){
                    r++;
                }
                tmp += to_string(r - l) + prev[l];
                l = r;
            }
            prev = tmp;
        }
        return prev;
    }
};