#include<iostream>

using namespace std;

int main(){

    cout<<"Enter a number : ";
    
    int num;
    cin>>num;

    int product=1;

    while(num > 0)
    {   
        int r=num%10;
        num=num/10;
        product=product*r;
    }

    cout<<"The sum of digits is "<<product<<endl;

    return 0;
}