#include<iostream>

using namespace std;

int main(){

    cout<<"Enter any 5 numbers "<<endl;

    int marks[5];
    int sum=0;
    for(int i=0;i<5;i++){
        cin>>marks[i];
        sum=sum+marks[i];
    }

    cout<<"The sum is "<<sum<<endl;

    float average=sum/5.0;

    cout<<"The average of five marks is "<<average<<endl;

}