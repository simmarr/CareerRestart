#include<iostream>
#include<vector>

using namespace std;

void doubleValues(vector<int>&v)
{
    for(int i=0;i<v.size();i++){
        v[i]=2*v[i];
        cout<<v[i]<<" ";
    }
    
}

int main(){
    
    vector<int>v;
    cout<<"Enter any 10 numbers"<<endl;
    for(int i=0;i<10;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
    doubleValues(v);

    return 0;

}