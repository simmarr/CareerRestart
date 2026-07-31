#include<iostream>
#include<vector>

using namespace std;

int main(){

    cout<<"Enter the size of list"<<endl;
    int n;
    cin>>n;

    vector<int>v;
    cout<<"Enter n Numbers"<<endl;

    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }

    int sum=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
    }

    cout<<"The sum of all numbers is "<<sum<<endl;

    return 0;
    
}