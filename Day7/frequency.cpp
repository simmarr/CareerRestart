#include<iostream>

using namespace std ;

int main(){

    cout<<"Enter any 10 numbers "<<endl;

    int arr[10];
    for(int i=0;i<10;i++)cin>>arr[i];

    int count = 0;

    cout<<"Enter the element whose frequency is to be known"<<endl;

    int target;
    cin>>target;

    for(int i=0;i<10;i++){

        if(arr[i]==target){
            count++;
        }
    }

    cout<<"The frequency of "<<target<<" is "<<count<<endl;

    return 0;

}