#include<iostream>

using namespace std;

int main(){

    cout<<"Enter a number : ";
    
    int num;
    cin>>num;
    int temp=num;

    
    int newNumber=0;
    int count=0;

    while(num > 0)
    {   
        int r = num%10;
        num = num/10;
        count++;
        newNumber = newNumber*10 + r;
    }

    if(temp==newNumber)
    cout<<"The given number is palindrome";
    else
    cout<<"The given number is not palindrome";

    return 0;
}