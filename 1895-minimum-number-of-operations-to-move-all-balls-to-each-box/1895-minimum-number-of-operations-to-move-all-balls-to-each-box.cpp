class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans;

        int n = boxes.length();

        for (int i = 0; i < boxes.length(); i++) {
            int sum = 0;
            for (int j = 0; j < n; j++) {

                if (boxes[j] == '1') {
                    sum = sum + abs(i - j);
                }
            }
            ans.push_back(sum);
        }
        return ans;
    }
};