#include<iostream>

using namespace std;

int main(){

    cout<<"Enter a number : ";
    
    int num;
    cin>>num;

    int count=0;

    while(num > 0)
    {   
        num=num/10;
        count++;
    }

    cout<<"The number of digits are "<<count<<endl;

    return 0;
}