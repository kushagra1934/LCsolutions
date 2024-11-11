class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> occurence(26,0);
        int sum =0; 

        for(int i=0; i<sentence.length();i++){
            int index= sentence[i]-'a';

            if(occurence[index]==0){
                occurence[index]+=1;
                sum = sum +occurence[index];
            }
        }
        if(sum==26){
            return true;
        }
        return false;
    }
};