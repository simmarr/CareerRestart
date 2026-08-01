#include<iostream>
#include<vector>

using namespace std;

int main(){
    cout<<"Enter the size of vector"<<endl;
    int n;
    cin>>n;

    vector<int>v;
    cout<<"Enter "<<n<<" numbers"<<endl;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }

    cout<<"Enter the element you need to check whether present or not"<<endl;
    int target;
    cin>> target;

    bool found=false;

    for(auto i:v){
        if(v[i]==target){
            found=true;
            break;
        }
    }

    if(found){
        cout<<"Element found"<<endl;
    }
    else
    cout<<"Element not found"<<endl;

    return 0;
}