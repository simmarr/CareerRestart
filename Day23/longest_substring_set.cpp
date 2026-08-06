#include<iostream>
#include<unordered_set>

using namespace std;

int lengthOfLongestSubstring(string s)
{
    int left = 0;

    unordered_set<char>seen;

    int current = 0;

    int largest = current;

    for(int right = 0 ; right < s.size() ; right++){

        while(seen.count(s[right])){

            seen.erase(s[left]);
            left++;

        }
        seen.insert(s[right]);

        current=right-left+1;

        if(current>largest){
            largest=current;
        }
    }

    return largest;
}
int main(){
    string s;
    cin>>s;

    int result=lengthOfLongestSubstring(s);

    cout<<result<<endl;

    return 0;

}