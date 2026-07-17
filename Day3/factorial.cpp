#include<iostream>

using namespace std;

int main(){

    cout<<"Enter the number : ";

    int n;
    cin>>n;
    
    if( n==0 ){

        cout<<"0! is 1"<<endl;

    }else if( n>0 ){

        int ans=1;
        for(int i=n;i>=1;i--)
        {
            ans=ans*i;
        }
        cout<<n<<"! is "<<ans<<endl;

    }else{

        cout<<"Invalid number"<<endl;
    }
    
}