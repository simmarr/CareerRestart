#include<iostream>

using namespace std ;

void reverse(int arr[],int size){

    int left=0;
    int right=9;

    while(left<right){
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;

        left++;
        right--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    cout<<"Enter 10 numbers"<<endl;

    int arr[10];
    for(int i=0;i<10;i++)cin>>arr[i];

    cout<<"The reversed array is"<<endl;
    reverse(arr,10);

    return 0;
}