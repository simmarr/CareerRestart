#include<iostream>

using namespace std;

int main(){

    cout<<"Enter a number : ";
    
    int num;
    cin>>num;

    
    int newNumber=0;

    while(num > 0)
    {   
        int r = num%10;
        num = num/10;
        newNumber = newNumber*10 + r;
    }

    cout<<"The reversed number is "<<newNumber<<endl;

    return 0;
}