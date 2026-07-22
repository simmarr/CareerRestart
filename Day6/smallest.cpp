#include<iostream>

using namespace std;

int main(){

    cout<<"Enter any 10 numbers"<<endl;

    int arr[10];
    
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }

    int smallest=arr[0];

    for(int i=1;i<10;i++){
        if( arr[i] < smallest ){
            smallest = arr[i];
        }
    }

    cout<<"The smallest number among 10given numbers is "<<smallest<<endl;

    return 0;
}