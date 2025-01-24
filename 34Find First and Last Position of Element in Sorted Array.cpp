class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int k) {
        
        int start=0; 
        int end=arr.size()-1;
        int res1=0;
        int res2=0;

        bool check1=0;
        bool check2=0;

        while(start<=end){
            int mid = start+(end-start)/2;
            if(k==arr[mid]){
                res1=mid;
                end=mid-1;
                check1=1;

            }
            else if(k<arr[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }

        start=0; 
        end=arr.size()-1;

        while(start<=end){
            int mid = start+(end-start)/2;
            if(k==arr[mid]){
                res2=mid;
                start=mid+1;
                check2=1;

            }
            else if(k<arr[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }

        if(check1 && check2){
            return {res1,res2};
        }
        else{
            return {-1,-1};
        }

        



    }
};
