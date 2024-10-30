class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row;
        rowIndex=rowIndex+1;
        long long res=1;
        row.push_back(res);
        for(int i =1; i<rowIndex; i++){
            res= res*(rowIndex-i);
            res=res/(i);
            row.push_back(res);

        }
        return row;
    }


};