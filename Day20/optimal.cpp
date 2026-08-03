#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{

   unordered_map<int,int>mp;

   for(int i=0;i<nums.size();i++){

        int needed=target-nums[i];

        if(mp.count(needed)){
            return{mp[needed],i};
        }
        else
        {
            mp[nums[i]]=i;
        }
   }

   return {};

}

int main(){

    vector<int>v;
    cout<<"enter 10 numbers"<<endl;
    for(int i=0;i<10;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }

    cout<<"Enter target"<<endl;
    int target;
    cin>>target;

    vector<int>ans=twoSum(v,target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;

}