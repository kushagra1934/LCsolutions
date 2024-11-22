class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, right = 0, ans = 0, n = s.length();
        map<char, int> mpp;

        while (left<n && right < n) {
            mpp[s[right]]++;
            while (mpp[s[right]] > 1) {
                mpp[s[left]]--;
                if (mpp[s[left]] == 0) {
                    mpp.erase(s[left]);
                }
                left++;
            }
            ans = max(ans, right-left+1);
            right++;
        }
        return ans;
    }
};
