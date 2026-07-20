#include<iostream>

using namespace std;

int main(){

    cout<<"Enter a number : ";
    
    int num;
    cin>>num;

    int odds=0;
    int evens=0;

    while(num > 0)
    {   
        int r=num%10;
        num=num/10;
        if(r%2==0)
        evens++;
        else
        odds++;
    }

    cout<<"Odds "<<odds<<endl;
    cout<<"Evens "<<evens<<endl;

    return 0;
}