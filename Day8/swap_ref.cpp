#include<iostream>

using namespace std; 

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){

    cout<<"Enter any two number you want to get swapped "<<endl;

    int num1,num2;
    cin>>num1>>num2;

    swap(num1,num2);

    cout<<"Swapped numbers are "<<num1<<" & "<<num2<<endl;

    return 0;
}