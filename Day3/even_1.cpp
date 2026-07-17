#include<iostream>

using namespace std;

int main(){

    cout<<"Enter any poitive integer : ";
    
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        if( i%2 == 0)
        {
            cout<<i<<" ";
        }
    }

    return 0;
}
