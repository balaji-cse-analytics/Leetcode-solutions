class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minpro=prices[0];
        int maxpro=0;
        for(int i=0;i<prices.size();i++){
            int pro=prices[i]-minpro;
            maxpro=max(maxpro,pro);
            minpro=min(minpro,prices[i]);
        }
        return maxpro;
    }
};