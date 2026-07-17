#include<iostream>

using namespace std;

int main(){

    float marks;
    cout<<"Enter Marks : ";
    cin>>marks;

    if(marks>100||marks<0){
        cout<<"Invalid Marks"<<endl;
    }else if(marks>=40){
        cout<<"Pass"<<endl;
    }else{
        cout<<"Fail"<<endl;
    }

    return 0;
}