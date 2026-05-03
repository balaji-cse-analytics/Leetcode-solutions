class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result;
        long long val=1;
        for(int j=0;j<=rowIndex;j++){
            result.push_back(val);
            val=val*(rowIndex-j)/(j+1);
        }
        return result;
    }
};