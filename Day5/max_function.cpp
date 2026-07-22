#include<iostream>

using namespace std;

int getLarger(int num1,int num2)
{
    if(num1>num2)return num1;
    else
    return num2;
}
int main(){

    cout<<"Enter two numbers : ";
    int num1,num2;
    cin>>num1>>num2;

    int ans=getLarger(num1,num2);
    cout<<ans<<endl;

    return 0;
}