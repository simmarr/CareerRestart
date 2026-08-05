class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        double currSum=0;
        for(int i=0;i<k;i++){
            currSum+=nums[i];
        }

        double currentAverage=currSum/k;
        double maximumAverage=currentAverage;

        for(int i=k;i<nums.size();i++){
            currSum=currSum-nums[i-k]+nums[i];
            currentAverage=currSum/k;
            if(currentAverage>maximumAverage){
                maximumAverage=currentAverage;
            }
        }

        return maximumAverage;

    }
};