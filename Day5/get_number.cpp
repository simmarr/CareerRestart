#include<iostream>

using namespace std;

int getNumber(){

    cout<<"Enter any number :";

    int num;
    cin>>num;

    return num;
}

int main(){

    int value=getNumber();
    int ans=value*value;
    cout<<"The  square of Number you entered is "<<ans<<endl;

    return 0;
}