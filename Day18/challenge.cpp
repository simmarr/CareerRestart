#include<iostream>
#include<limits.h>
#include<vector>

using namespace std;

int main(){
    cout<<"Enter the size of vector"<<endl;
    int n;
    cin>>n;

    vector<int>v;
    cout<<"Enter "<<n<<" numbers"<<endl;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }

    int largest=INT_MIN;
    int second_largest=INT_MIN;

    for(int i=0;i<v.size();i++){

        if(v[i]>largest){
            second_largest=largest;
            largest=v[i];
        }
        else if(v[i]>second_largest && v[i]!=largest){
            second_largest=v[i];
        }
    }

    cout<<"Largest is "<<largest<<" & second largest is "<<second_largest<<endl;

    return 0;

}