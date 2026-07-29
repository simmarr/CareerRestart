#include<iostream>

using namespace std;

int* createArray(int size){
    int *arr=new int[size];
    for(int i=0;i<size;i++){
        arr[i]=i+1;
    }

    return arr;
}

int main(){
    cout<<"Enter the size of arrray you want to create"<<endl;

    int n;
    cin>>n;

    int *arr=createArray(n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    delete[] arr;

    return 0;

}