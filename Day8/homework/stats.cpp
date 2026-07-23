#include<iostream>

using namespace std;

int findSum(int arr[],int size){
    int sum=0;
    for(int i=0;i<10;i++){
        sum+=arr[i];
    }

    return sum;
}

float findAverage(int sum,float size){
    float average=sum/size;
    return average;
}

int main(){

    cout<<"Enter the list of 10 numbers "<<endl;

    int arr[10];
    for(int i=0;i<10;i++)cin>>arr[i];

    int sum=findSum(arr,10.0);

    float average=findAverage(sum,10);

    cout<<"The sum of 10 numbers is "<<sum<<" & "<<"The average of 10 numbers is "<<average<<endl;

    return 0;
}