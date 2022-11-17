/*WAP to enter any two numbers and display their sum*/
#include<iostream>
using namespace std;

int main()
{
    int num1, num2, sum;
    cout<<"enter first number :";
    cin>>num1;
    cout<<"enter second number :";
    cin>>num2;
    sum = num1 + num2;
    cout<<"the sum of "<<num1 <<" and "<<num2 <<" is "<<sum<<endl; //endl means break the line/ new line

    return 0;
}