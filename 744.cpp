class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start=0; 
        int end =letters.size()-1 ; 
        int res=-1; 
        bool found =0; 


        while(start<=end){
            int mid= start+(end-start)/2;
            if(letters[mid]>target){
                res=mid;
                end=mid-1;

            }
            else{
                start=mid+1;
            }
        }
        if(res==-1){
            return letters[0];
        }
        else{
            return letters[res];
        }

        

    }
};
