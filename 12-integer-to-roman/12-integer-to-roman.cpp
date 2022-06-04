class Solution {
public:
    string intToRoman(int num) {
          vector<pair<int, string>> map{{1, "I"}, {4, "IV"}, {5, "V"}, {9, "IX"}, {10, "X"}, {40, "XL"},{50, "L"}, {90, "XC"}, {100, "C"}, {400, "CD"}, {500, "D"}, {900, "CM"}, {1000, "M"}};
        
        int i = map.size()-1;
        string res = "";
        while(num!=0){
            while(map[i].first > num){
                i--;
            }
            res = res + map[i].second;
            num = num - map[i].first;
        }
        return res;
    }
};