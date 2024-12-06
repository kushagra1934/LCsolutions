class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        sort(banned.begin(),banned.end());
        int sum=0;
        int ans=0;
        map<int,int>mp;
        for(int j=0;j<banned.size();j++){
            mp[banned[j]]++;
        }
        for(int i=1;i<=n;i++){
            if(mp[i] == 0){
                sum=sum+i;
                ans++;
            }
            if(sum>maxSum){ 
            ans--;
            break;
            }
        }
        return ans;
    }
};