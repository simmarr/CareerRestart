#include<iostream>

using namespace std ;

int* createNumber(){
    int *p=new int;
    *p=100;
    return p;
}

int main(){
    int *x=createNumber();
    cout<<*x<<endl;

    delete x;
    x=nullptr;

    return 0;
}
