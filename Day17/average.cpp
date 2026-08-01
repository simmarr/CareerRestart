#include<iostream>
#include<vector>

using namespace std;

double average(const vector<int>&v){
    double sum=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
    }
    if(!(v.empty()))
    {
        double average=sum/v.size();
        return average;
    }
    else
    cout<<"Vector is empty"<<endl;
   
}

int main(){

    vector<int>v;

    cout<<"Enter any 10 numbers"<<endl;
    for(int i=0;i<10;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
    cout<<"Teh average of all elements is "<<average(v)<<endl;

    return 0;
}