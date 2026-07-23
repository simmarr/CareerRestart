#include<iostream>

using namespace std;

int even(int arr[],int size){
    int count=0;
    for(int i=0;i<10;i++){
        if(arr[i]%2==0){
            count++;
        }
    }

    return count;

}

int main(){
    cout<<"Enter any 10 numbers"<<endl;

    int arr[10];
    for(int i=0;i<10;i++)cin>>arr[i];

    int count=even(arr,10);

    cout<<"The number of even numbers is "<<count;

    return 0;
}