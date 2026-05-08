class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int target=-nums[i];
            int left=i+1;
            int right=nums.size()-1;
            while(left<right){
                int curr=nums[left]+nums[right];
                if(curr<target){
                    left++;
                }
                else if(curr>target){
                    right--;
                }
                else{
                    ans.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                    while(left<right && nums[left]==nums[left-1]){
                        left++;
                    }
                    while(left<right && nums[right]==nums[right+1]){
                        right--;
                    }
                }
            }
        }
        return ans;
    }
};