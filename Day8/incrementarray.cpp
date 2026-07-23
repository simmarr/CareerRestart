#include<iostream>

using namespace std;

void inrement(int arr[],int size){
    for(int i=0;i<size;i++){
        arr[i]=arr[i]+1;
    }
}

int main(){
    cout<<"enter a list of 10 numbers"<<endl;

    int arr[10];
    for(int i=0;i<10;i++)cin>>arr[i];

    inrement(arr,10);

    for(int i=0;i<10;i++)cout<<arr[i]<<endl;

    return 0;
}