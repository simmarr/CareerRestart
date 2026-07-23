#include<iostream>

using namespace std ;

void doubleIt(int a){

    a=2*a;
    cout<<a<<endl;
}

int main(){

    cout<<"Enter any number : ";

    int x;
    cin>>x;

    doubleIt(x);

    cout<<x<<endl;

    return 0;
}