#include<iostream>
#include<vector>

using namespace std;

int main(){
    
    vector<int>v;
    cout<<"Enter three numbers"<<endl;

    for(int i=0;i<3;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }

    cout<<"Is it empty?"<<endl;
    cout<<v.empty()<<endl;

    v.clear();

    cout<<"Is it empty?"<<endl;
    cout<<v.empty()<<endl;

    return 0;

}