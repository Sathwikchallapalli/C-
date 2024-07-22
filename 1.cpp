#include<iostream>
#include<string>

using namespace std;

class Calculator{
private:
float num1;
float num2;

public:
Calculator(float num1,float num2):num1{num1},num2{num2}{};

float Addition(){
   float add=num1 + num2;
    return add;
}

float Subtraction(){
   float sub=num1 - num2;
    return sub;
}

float Multiplication(){
   float mul=num1*num2;
    return mul;
}

float division(){
   float div=num1/num2;
    return div;
}
};

int main(){
    cout<<"             Basic Calculator of 2 numbers.                     "<<endl;
    float num1, num2;
    cout<<"Enter a number: ";
    cin>>num1;
    cout<<"Enter another number: ";
    cin>>num2;

    Calculator Cal(num1,num2);
    cout<<"Result of addition: "<<Cal.Addition()<<endl;
    cout<<"Result of subtraction: "<<Cal.Subtraction()<<endl;
    cout<<"Result of multiplication: "<<Cal.Multiplication()<<endl;
    cout<<"Result of division: "<<Cal.division()<<endl;
}
