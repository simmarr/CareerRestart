#include<iostream>

using namespace std ;

int fact(int num)
{
    int res=1;
    for(int i=num;i>1;i--)
    {
        res=res*i;
    }
    return res;
}

int main(){

    cout<<"Enter any Number :";

    int num;
    cin>>num;

    if(num<0)
    {
        cout<<"Invalid Number"<<endl;
    }
    else if(num==0)
    {
        cout<<"0! is 1"<<endl;
    }
    else
    {
        int ans=fact(num);
        cout<<num<<"! is "<<ans<<endl;
    }

    return 0;
}