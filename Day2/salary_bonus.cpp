#include<iostream>
#include<string>

using namespace std;

int main(){
    cout<<"Enter Name : ";
    string name;
    getline(cin,name);

    cout<<endl;
    cout<<"Enter Monthly Salary : ";
    float salary;
    cin>>salary;

    float annual_salary= 12*salary;
    float bonus= annual_salary/10;
    float total_salary= annual_salary + bonus;

    cout<<"Annual Salary = "<<annual_salary<<endl;
    cout<<"Bonus         = "<<bonus<<endl;
    cout<<"Total Salary  = "<<total_salary<<endl;

    return 0;






}