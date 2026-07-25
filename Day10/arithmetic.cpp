#include<iostream>

using namespace std;

int main(){

    int marks=10;
    int *ptr=&marks;

    *ptr=*ptr+80;

    cout<<marks<<endl;
    cout<<*ptr<<endl;

    return 0;
}