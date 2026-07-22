#include<iostream>

using namespace std;

int main(){

    cout<<"Enter any 10 numbers"<<endl;

    int arr[10];
    
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }

    int largest=arr[0];

    for(int i=1;i<10;i++){
        if( arr[i] > largest){
            largest = arr[i];
        }
    }

    cout<<"The largest number among 10given numbers is "<<largest<<endl;

    return 0;
}