#include<iostream>

using namespace std;

int main(){

    cout<<"Enter any positive integer : ";
    
    int n;
    cin>>n;

    for(int i=2;i<=n;i=i+2)
    {
        cout<<i<<" ";
    }

    return 0;
}
