#include<iostream>

using namespace std;

int main(){

    cout<<"Enter the Number : ";

    int num;
    cin>>num;
    int temp=num;
    int temp2=num;

    int count=0;
    int sum=0;

    while(num>0){
        num=num/10;
        count++;
    }
    while(temp>0)
    {
        int r=temp%10;
        temp=temp/10;
        int cube=1;
        for(int i=1;i<=count;i++)
        {
            cube=r*cube;
        }
        sum=sum+cube;
    }

    if(sum==temp2)
    cout<<"it is an Armstrong number";
    else
    cout<<"It is not an armstrong number";

}