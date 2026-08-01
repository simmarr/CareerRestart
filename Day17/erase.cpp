#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v;

    cout<<"Initial vector"<<endl;

    for(int i=0;i<5;i++){
        v.push_back(10*(i+1));
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;

    v.erase(v.begin()+2);

    cout<<"Resultant vector after deleting an element"<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}