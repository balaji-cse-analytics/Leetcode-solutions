class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st;
        unordered_set<int> ansset;
        for(auto x:nums1){
            st.insert(x);
        }
        for(auto x:nums2){
            if(st.find(x)!=st.end()){
                ansset.insert(x);
            }
        }
        vector<int> ans(ansset.begin(),ansset.end());
        return ans;

    }
};