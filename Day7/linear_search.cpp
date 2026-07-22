#include<iostream>

using namespace std ;

int main(){

    cout<<"Enter any 10 numbers "<<endl;

    int marks[10];
    for(int i=0;i<10;i++)cin>>marks[i];

    cout<<"Enter any number you want to find in the list"<<endl;

    int num;
    cin>>num;

    int position=-1;

    for(int i=0;i<10;i++){
        if( num == marks[i]){
            position=i;
            break;
        }
    }

    if(position == -1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at index "<<position<<endl;
    }

    return 0;
}