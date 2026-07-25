#include<iostream>

using namespace std;

void greet(string name,int age=18){
    cout<<"Name:"<<name<<" age:"<<age<<endl;
}

int main(){

    greet("Ali");

    greet("Ali",20);

    return 0;
}