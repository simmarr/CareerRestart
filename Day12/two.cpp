#include<iostream>

using namespace std ;

int main(){

    int *a=new int;
    int *b=new int;

    *a=100;
    *b=200;

    cout<<*a+*b<<endl;

    delete a;
    delete b;

    a=nullptr;
    b=nullptr;

    return 0;
}