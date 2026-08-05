#include<iostream>
#include<vector>

using namespace std;

int maximumWindowSum(vector<int>& v, int k)
{
    int currentSum=0;

    for(int i=0;i<k;i++){

        currentSum+=v[i];

    }

    int maximumSum = currentSum;

    for(int i=k ; i<v.size() ; i++){

        currentSum = currentSum - v[i-k] + v[i] ;
        if(currentSum > maximumSum){

            maximumSum = currentSum;

        }
    }

    return maximumSum;
}

int main(){
    vector<int>v{1,2,3,4,5,6,7,8,9};
    int k=3;
    int ans=maximumWindowSum(v,k);
    cout<<ans;

    return 0;
}