#include<iostream>

using namespace std;

int largest(int arr[],int size){
    int largest=arr[0];
    for(int i=1;i<size;i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
    }

    return largest;
}
int main(){
    cout<<"Enter the list of 10 numbers"<<endl;
    
    int arr[10];
    for(int i=0;i<10;i++)cin>>arr[i];

    int result=largest(arr,10);

    cout<<"the largest number is : "<<result;
}