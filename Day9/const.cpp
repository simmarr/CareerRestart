#include<iostream>

using namespace std;

void display(const int arr[],int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    cout<<"Enter list of 10 numbers"<<endl;

    int arr[10];
    for(int i=0;i<10;i++)cin>>arr[i];

    display(arr,10);

    return 0;
}
