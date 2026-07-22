#include<iostream>

using namespace std ;

int main(){

    cout<<"Enter any 10 numbers "<<endl;

    int arr[10];
    for(int i=0;i<10;i++)cin>>arr[i];

    int left = 0;
    int right = 9;

    while( left < right ){

        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] =temp;

        left++;
        right--;
    }

    cout<<"The reversed array is"<<endl;
    
    for(int i=0;i<10;i++){
        
        cout<<arr[i]<<" ";
    }

    return 0;

    }