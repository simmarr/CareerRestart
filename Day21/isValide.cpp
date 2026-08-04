#include<iostream>

using namespace std;

bool isPalindrome(string s,int left,int right){

    while(left<right){
        if(s[left]!=s[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

bool isValid(string s){
    int left=0;
    int right=s.size()-1;

    while(left<right){
        if(s[left]!=s[right]){
            return isPalindrome(s,left+1,right)||isPalindrome(s,left,right-1);
        }
        else
        {
            left++;
            right--;
        }
    }

    return true;
}



int main(){

    cout<<"Enter any String "<<endl;

    string s;
    cin>>s;

    bool check=isValid(s);

    cout<<check<<endl;

    return 0;
}
