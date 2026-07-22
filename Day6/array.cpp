#include<iostream>

using namespace std;

int main(){

    int marks[5];
    cout<<"Enter marks of five students"<<endl;
    for(int i=0;i<5;i++){
        cin>>marks[i];
    }
    cout<<endl;

    cout<<"The marks are "<<endl;
    for(int i=0;i<5;i++){
        cout<<marks[i]<<endl;
    }

    return 0;
}