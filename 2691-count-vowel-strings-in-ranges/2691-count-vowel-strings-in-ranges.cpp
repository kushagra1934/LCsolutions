class Solution {
public:

    bool contains(const string& s){
        int n = s.size();
        set<char> st= {'a','e','i','o','u'};
        return st.count(s[0]) && st.count(s[s.size() - 1]);
    }

    // int helper(vector<string>& words, int left, int right){
    //     int ans=0; 
    //     for(int i = left; i<=right; i++){
    //         if(contains(words[i])){
    //             ans++;
    //         }
    //     }
    //     return ans;
    // }
    // vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
    //     vector<int> answer;
    //     for(int i =0; i<queries.size();i++){
    //         int x= helper(words,queries[i][0], queries [i][1]);
    //         answer.push_back(x);
    //     }
    //     return answer;
    // }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n= words.size();
        vector<int> prefix(n+1,0);
        int cur=0;
        

        for(int i =1; i<=n;i++){
            if(contains(words[i-1])==0){
            cur=0;
            }
            else{
                cur=1;
            }
            prefix[i]=prefix[i-1]+cur;
        }
        vector<int> answer;
        for(int i =0; i<queries.size();i++){
            int left = queries[i][0];
            int right = queries[i][1];
            answer.push_back(prefix[right + 1] - prefix[left]);
            
        }
        return answer;
    }
};

