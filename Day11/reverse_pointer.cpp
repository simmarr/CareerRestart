#include<iostream>

using namespace std;

int main(){

    int arr[]={10,20,30,40,50};
    int *p=arr+4;

    for(int i=0;i<5;i++){
        cout<<*p<<endl;
        p--;
    }

    return 0;
}