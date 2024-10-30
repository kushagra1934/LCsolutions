class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row;
        long long res=1;
        row.push_back(res);
        for(int i =0; i<rowIndex; i++){
            res= res*(rowIndex-i);
            res=res/(i+1);
            row.push_back(res);

        }
        return row;
    }


};