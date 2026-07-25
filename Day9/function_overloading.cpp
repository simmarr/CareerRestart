#include<iostream>

using namespace std;

int area(int edge){
    return edge*edge;
}

int area(int length,int breadth){

    return length*breadth;
}

double area(double radius){

    return 3.14*radius*radius;
}
int main(){

    cout<<"The area of square is "<<area(5)<<endl;
    cout<<"The area of rectangle is "<<area(5,4)<<endl;
    cout<<"The area of circle is "<<area(5.14)<<endl;

    return 0;
}