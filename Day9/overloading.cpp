#include<iostream>

using namespace std;

int multiply(int a, int b){
    return a*b;
}

double multiply(double a, double b = 2.0)
{
    return a*b;
}
int main(){

    int res1=multiply(4,5);
    cout<<res1<<endl;

    double res2=multiply(3.3);
    cout<<res2<<endl;

    double res3=multiply(2.5,4.0);
    cout<<res3<<endl;

    return 0;
}
