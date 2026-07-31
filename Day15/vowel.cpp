#include<iostream>

using namespace std;

int main(){

    cout<<"enter any string"<<endl;
    string s;
    cin>>s;
    
    int count=0;
    
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'||s[i]=='A')
        count++;
        if(s[i]=='e'||s[i]=='E')
        count++;
        if(s[i]=='i'||s[i]=='I')
        count++;
        if(s[i]=='o'||s[i]=='O')
        count++;
        if(s[i]=='u'||s[i]=='U')
        count++;

    }

    cout<<"The number of vowels in string are :"<<count<<endl;

    return 0;
}