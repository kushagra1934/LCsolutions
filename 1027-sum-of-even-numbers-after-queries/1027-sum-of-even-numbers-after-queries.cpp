class Solution {
public:
    int solve(vector<int>&nums){
        int ans=0;
        for(auto j:nums){
            if(j%2==0){
                ans+=j;
            }
        }
        return ans;
    }
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>a;
        int n= nums.size();
        
        int m = queries.size();
        for(int i =0 ; i<m; i++){
            nums[queries[i][1]]+=queries[i][0];
            int x=solve(nums);
            a.push_back(x);
        }

        return a;

    }
};