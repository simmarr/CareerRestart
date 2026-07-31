#include<iostream>
#include<vector>

using namespace std;

int main(){
    cout<<"Enter the size of vector"<<endl;
    int n;
    cin>>n;

    vector<int>v(n);
    cout<<"Enter "<<n<<" numbers"<<endl;

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    vector<int>odd;
    for(int i=0;i<n;i++)
    {
        if(v[i]%2!=0){
            odd.push_back(v[i]);
        }
    }
    
    for(int i=0;i<odd.size();i++)
    {
        cout<<odd[i]<<" ";
    }

    return 0;
}