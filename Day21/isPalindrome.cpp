#include<iostream>

using namespace std;

bool isPalindrome(string s){

    int left=0;
    int right=s.size()-1;

    while(left<right){
        if(s[left]!=s[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main(){

    cout<<"Enter any String "<<endl;

    string s;
    cin>>s;

    bool check=isPalindrome(s);

    cout<<check<<endl;

    return 0;
}

