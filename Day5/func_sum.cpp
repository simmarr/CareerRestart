#include<iostream>

using namespace std;

int sum( int a, int b){

    return a+b;
}

int main(){

    cout<<"Enter any two numbers : ";

    int a;
    int b;
    cin>>a>>b;

    int ans=sum(a,b);

    cout<<"The Sum of two numbers is "<<ans<<endl;

    return 0;
}