#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int binary_search(vector<int>& nums,int target){
    int left=0;
    int right=nums.size()-1;
    

    while(left<=right){
        int mid=left+(right-left)/2;
        if(nums[mid]<target){
            left=mid+1;
        }
        else if(nums[mid]>target){
            right=mid-1;
        }
        else{
            return mid;
        }
    }

    return -1;
}

int main(){
    cout<<"Enter the size of vector"<<endl;
    int n;
    cin>>n;

    vector<int>nums;
    for(int i=0;i<n;i++){
        int j;
        cin>>j;
        nums.push_back(j);
    }
    cout<<endl;

    sort(nums.begin(),nums.end());

    cout<<"Enter the target number"<<endl;
    int target;
    cin>>target;

    int result=binary_search(nums,target);

    cout<<result<<endl;

    return 0;

}