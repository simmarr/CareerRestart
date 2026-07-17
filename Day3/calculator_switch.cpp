#include<iostream>

using namespace std;

int main(){

    cout<<"Enter two numbers : ";

    float num1,num2;
    cin>>num1>>num2;

    cout<<"Menu : "<<endl;
    cout<<"1. Addition "<<endl;
    cout<<"2. Subtraction "<<endl;
    cout<<"3. Multiplication "<<endl;
    cout<<"4. Division "<<endl;

    cout<<"Enter your choice : ";
    int choice;
    cin>>choice;

    switch(choice){

        case 1:
            cout<<"Result = "<<num1+num2<<endl;
            break;
        case 2:
            cout<<"Result = "<<num1-num2<<endl;
            break;
        case 3:
            cout<<"Result = "<<num1*num2<<endl;
            break;
        case 4:
            cout<<"Result = "<<num1/num2<<endl;
            break;
        default:
            cout<<"Invalid choice"<<endl;  
            break;      

    }
    
    return 0;

}