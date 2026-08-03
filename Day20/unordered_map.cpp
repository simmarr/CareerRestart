#include<iostream>
#include<unordered_map>

using namespace std;

int main(){

    unordered_map<int,int>mp;

    mp[5] = 100;
    mp[10] = 200;

    cout << mp[5] << endl;
    cout << mp.count(10) << endl;
    cout << mp.count(7) << endl;

    return 0;

}