#include<iostream>

using namespace std;

int main(){

    cout<<"enter any string"<<endl;

    string s;
    cin>>s;

    int n=s.length();
    int l=0;
    int r=n-1;
    bool flag=true;

    while(l<r){
        if(s[l]!=s[r]){
            cout<<"It is not palindrome"<<endl;
            flag=false;
            break;
        }
        l++;
        r--;
    }
    if(flag)
    cout<<"It is palindrome"<<endl;

    return 0;

}