#include<iostream>

using namespace std ;

int main(){

    int arr[] = { 5, 10, 15, 20 };
    int *p=arr;

    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;

    return 0;
}