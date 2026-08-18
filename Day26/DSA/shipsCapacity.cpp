class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int left=0;
        int right=0;
        for(int i=0;i<weights.size();i++){
            left=max(left,weights[i]);
            right+=weights[i];
        }
       

        int ans=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            int daysNeeded=1;
            int currentLoad=0;
            for(int i=0;i<weights.size();i++){
                currentLoad+=weights[i];
                if(currentLoad>mid){
                    daysNeeded++;
                    currentLoad=weights[i];
                }
            }
            if(daysNeeded>days){
                left=mid+1;
            }
            else{
                ans=mid;
                right=mid-1;
            }
        }

        return ans;

    }
};