#include<iostream>

using namespace std;

int main(){

    cout<<"Enter any positive number : ";

    int n;
    cin>>n;

    int numberOfOdds=0;
    int numberOfEvens=0;
    for(int i=1;i<=n;i++)
    {
        if( i%2!=0 ){
            numberOfOdds++;
        }else{
            numberOfEvens++;
        }
    }

    cout<<"Number of Odd numbers are "<<numberOfOdds<<endl;
    cout<<"Number of Even numbers are "<<numberOfEvens<<endl;

    return 0;
}