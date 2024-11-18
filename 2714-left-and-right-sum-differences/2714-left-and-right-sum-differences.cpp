class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> left_sum(n);
        vector<int> right_sum(n); 
        vector<int> result;

        left_sum[0] = nums[0];
        for (int i = 1; i < n; i++) {
            left_sum[i] = nums[i] + left_sum[i - 1];
        }

        reverse(nums.begin(), nums.end());
        right_sum[0] = nums[0];
        for (int i = 1; i < n; i++) {
            right_sum[i] = nums[i] + right_sum[i - 1];
        }
        reverse(right_sum.begin(), right_sum.end());

        for (int i = 0; i < n; i++) {
            result.push_back(abs(left_sum[i] - right_sum[i]));
        }
        return result;
    }
};
