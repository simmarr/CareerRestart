#include<iostream>

using namespace std;

int* badpointer(){
    int x=50;
    return &x;//it is dangling pointer ,as x is sitored in stack and will vanish once function is destroyes;
}

int main(){
    int* a=badpointer();
    cout<<&a<<endl;

    return 0;
}