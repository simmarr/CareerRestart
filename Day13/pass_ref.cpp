#include<iostream>

using namespace std;

void addten(int &x){

    x=x+10;
}

int main(){

    int a=5;

    cout<<a<<endl;

    addten(a);

    cout<<a<<endl;

    return 0;
}
