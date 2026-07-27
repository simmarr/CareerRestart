#include<iostream>

using namespace std ;

int main(){

    cout<<"Enter the size of array"<<endl;

    int n;
    cin>>n;

    int *arr = new int[n];

    int sum=0;

    cout<<"enter the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    cout<<sum<<endl;

    delete[] arr;
    arr=nullptr;

    return 0;

}