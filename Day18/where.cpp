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

    cout<<"Enter the element you need to check where it is present"<<endl;
    int target;
    cin>> target;

    int index=-1;

    for(int i=0;i<v.size();i++){
        if(v[i]==target){
            index=i;
            break;
        }
    }
    cout<<"Element found at "<<index<<endl;

    return 0;
}