#include<iostream>

using namespace std;

int main(){
    cout<<"Enter any string in lowercase"<<endl;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        s[i]=s[i]-32;
    }
    cout<<"The string in uppercase is"<<endl;
    cout<<s<<endl;

    return 0;
}