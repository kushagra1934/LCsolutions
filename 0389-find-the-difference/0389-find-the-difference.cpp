class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum_s=0;
        for(int i =0; i<s.length();i++){
            sum_s=sum_s+s[i];
        }
        int sum_t=0;
        for(int i=0; i<t.length();i++){
            sum_t=sum_t+t[i];
        }
        return (char)sum_t-sum_s;
    }
};