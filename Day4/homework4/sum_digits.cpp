#include<iostream>

using namespace std;

int main(){

    cout<<"Enter a number : ";
    
    int num;
    cin>>num;

    int sum=0;

    while(num > 0)
    {   
        int r=num%10;
        num=num/10;
        sum=sum+r;
    }

    cout<<"The sum of digits is "<<sum<<endl;

    return 0;
}