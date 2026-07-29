#include<iostream>

using namespace std ;

int square(int x){
    return x*x;
}

int main(){

    cout<<"Enter a number"<<endl;
    int n;
    cin>>n;

    cout<<"The sqaure of the number is "<<endl;
    cout<<square(n)<<endl;

    return 0;
}

