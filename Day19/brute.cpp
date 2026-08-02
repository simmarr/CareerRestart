#include<iostream>
#include<vector>

using namespace std;

vector<int> twoSum(vector<int>&nums, int target){

    vector<int>answer;

    for(int i=0;i<nums.size();i++){
        for(int j =i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target)
            {
                answer.push_back(i);
                answer.push_back(j);
                break;
            }
        }
    }

    if(answer.empty()){
        answer.push_back(-1);
        return answer;
    }
    else
    return answer;

}

int main(){
    vector<int>nums;
    for(int i=0;i<10;i++){
        nums.push_back(10*(i+1));
    }
    int target = 150;

    vector<int>answer=twoSum(nums,target);

    return 0;
}