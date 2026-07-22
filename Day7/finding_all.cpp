#include<iostream>

using namespace std ;

int main(){

    cout<<"Enter any 10 numbers "<<endl;

    int marks[10];
    for(int i=0;i<10;i++)cin>>marks[i];

    cout<<"Enter any number you want to find in the list"<<endl;

    int num;
    cin>>num;

    for(int i=0;i<10;i++){
        if( num == marks[i]){
            cout<<"element found at "<<i<<endl;
        }
    }

    return 0;
}