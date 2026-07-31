#include<iostream>
#include<vector>

using namespace std;

int main(){
    cout<<"Enter the size of vector"<<endl;
    int n;
    cin>>n;

    vector<int>v(n);
    cout<<"Enter "<<n<<" numbers"<<endl;

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<"The reverse list is"<<endl;
    for(int i=n-1;i>=0;i--){
        cout<<v[i]<<" ";
    }

    return 0;
}