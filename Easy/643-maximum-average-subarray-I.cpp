class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double current=0.0;
        double avg=0.0;
        for(int i=0;i<k;i++){
            current+=nums[i];
            avg=current/k;
        }
        double max=avg;
        for(int i=1;i<=nums.size()-k;i++){
            current=current-nums[i-1]+nums[i+k-1];
            avg=current/k;
            if(avg>max){
                max=avg;
            }
        }
        return max;
    }
};