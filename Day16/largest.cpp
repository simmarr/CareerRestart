#include<iostream>
#include<vector>

using namespace std;

int main(){
    cout<<"Enter the size of list"<<endl;
    int n;
    cin>>n;

    vector<int>v;
    cout<<"Enter "<<n<<" numbers"<<endl;

    for(int i=0;i<n;i++)
    { 
        int num;
        cin>>num;
        v.push_back(num);
    }

    int maximum=v[0];

    for(int i=1;i<n;i++){
        if(v[i]>maximum){
            maximum=v[i];
        }
    }

    cout<<"The largest number in the list is "<<maximum<<endl;

    return 0;
}