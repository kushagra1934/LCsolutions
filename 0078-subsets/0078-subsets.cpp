class Solution {
public:

    void subsequence(int ind, int n, vector<int>&arr, vector<vector<int>>&ans, vector<int>&nums){
        if(ind==nums.size()){
            ans.push_back({arr});
            return;
        }

        arr.push_back(nums[ind]);
        subsequence(ind+1,n,arr,ans,nums);
        arr.pop_back();
        subsequence(ind+1,n,arr,ans,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>arr;
        int n =nums.size();
        subsequence(0,n,arr,ans,nums);
        return ans;

    }
};