#include<iostream>

using namespace std;

int main(){

    cout<<"Enter three numbers : ";

    int n1,n2,n3;

    cin>>n1>>n2>>n3;

    if( n1 >= n2 ){
        if( n1 >= n3 ){
            cout<<"Largest number is "<<n1<<endl;
        }else{
            cout<<"Largest number is "<<n3<<endl;
        }

    }else{
        if( n2 >= n3 ){
           cout<<"Largest number is "<<n2<<endl; 
        }else{
           cout<<"Largest number is "<<n3<<endl;
        }
    }

    return 0;
}