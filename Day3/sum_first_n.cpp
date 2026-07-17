#include<iostream>

using namespace std;

int main(){

    cout<<"enter the number till you want sum :";

    int n;
    cin>>n;

    int sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }

    cout<<"Sum of first "<<n<<" natural numbers is "<< sum<<endl;

    return 0;
    
}