#include <bits/stdc++.h>
using namespace std;

int minEatingSpeed(vector<int>& piles, int h) {
    int ans=-1;
    int left=1;
    int n=piles.size();
    int right=piles[n-1];

    while(left<=right){
        int mid=left+(right-left)/2;
        int hours=0;
        for(int i=0;i<n;i++){
            hours+=(piles[i]+mid-1)/mid;
        }
        if(hours>h){
            left=mid+1;
        }
        else{
            ans=mid;
            right=mid-1;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> piles(n);

    for (int i = 0; i < n; i++) {
        cin >> piles[i];
    }
    

    int h;
    cin >> h;

    cout << minEatingSpeed(piles, h) << endl;

    return 0;
}