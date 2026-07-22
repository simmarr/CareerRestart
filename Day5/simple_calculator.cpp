#include<iostream>

using namespace std;

void add(int num1,int num2)
{
    cout<<num1+num2;
}

void sub(int num1,int num2)
{
    cout<<num1-num2;
}

void multiply(int num1,int num2)
{
    cout<<num1*num2;
}

void divide(int num1,int num2)
{
    if(num2==0)
    cout<<"Division by zero not possible";
    else
    cout<<num1/num2;
}

int main(){

    cout<<"Enter any two numbers"<<endl;
    int num1,num2;
    cin>>num1>>num2;

    cout<<"choose the operation"<<endl;
    cout<<"1. Addition  2. Subtraction 3. Multiplication 4. Division"<<endl;

    int choice;
    cin>>choice;
    
    switch(choice){

        case 1:
            add(num1,num2);
            break;
        case 2:
            sub(num1,num2);
            break;
        case 3:
            multiply(num1,num2);
            break; 
        case 4:
            divide(num1,num2);
            break; 
        default:
            cout<<"Invalid choice"<<endl;              
        
    }

    return 0;
}