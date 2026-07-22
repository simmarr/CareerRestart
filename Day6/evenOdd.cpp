#include<iostream>

using namespace std;

int main(){

    cout<<"Enter any 10 numbers"<<endl;

    int arr[10];
    int count1=0;
    int count2=0;
    
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        count1++;
        else
        count2++;
    }

    cout<<"No of odd number are "<<count2<<endl;
    cout<<"No of even number are "<<count1<<endl;

    return 0;
}