#include<iostream>

using namespace std;

int main(){
    
    cout<<"Enter any number : ";
    int num;
    cin>>num;

    if( num % 3 ==0 && num %5 ==0 ){
        cout<<"Number is divisible by both 3 and 5";
    }else{
        cout<<"Number is not divisible by both 3 and 5 together";
    }

    return 0;
}