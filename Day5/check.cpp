#include<iostream>

using namespace std;

bool check(int num)
{
    if(num%2==0)
    return true;
    else
    return false;
}

int main(){

    cout<<"Enter any number : ";

    int num;
    cin>>num;
    
    bool ans=check(num);

    if(ans)
    cout<<"The number is Even"<<endl;
    else
    cout<<"The number is Odd"<<endl;

    return 0;
}