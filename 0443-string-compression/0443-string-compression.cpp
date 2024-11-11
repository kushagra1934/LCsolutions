class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        
        int index=0;
        int i =0;
        while(i<n){
            int count =0;
            char current=chars[i];

            while(i<n && chars[i]==current){
                count=count+1;
                i=i+1;
            }
            chars[index]=current;
            index++;
            string s = to_string(count);
            if(count>1){
                for(int it=0;it<s.length();it++){
                    chars[index]=s[it];
                    index++;
                }
            }
        }
        return index;
    }
};