#include<iostream>
using namespace std; 
//function declaration
void sum(int, int);
void swapByReference( int &a ,int &b){
    int var = a;
    a = b;
    b = var;
}
void swapByPointer(int *a, int* b){
    int var = *a;
    *a = *b;
    *b = var;
}
//Recursion
int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n * factorial(n-1);
    //dry run
    // factorial(5) = 5 * factorial(4);
    // factorial(5) = 5 * 4 * factorial(3);
    // factorial(5) = 5 * 4 * 3 * factorial(2);
    // factorial(5) = 5 * 4 * 3 * 2 * factorial(1);
    // factorial(5) = 5 * 4 * 3 * 2 * 1; = 120
}
//Recursion
int count(int q){
    if(q>10){
        return 0;
    }
    return q + count(q+1);
}

int fibonacci(int f){
    if(f<2){
        return 1;
    }
    return fibonacci(f-2) + fibonacci(f-1);
}
int main(){
    // int x = 5, y = 6;
    // sum(x,y); //x and y are actual parameters
    // swapByReference(x,y); //swaping using reference variable
    // cout<<x<<y<<endl;
    // swapByPointer(&x, &y);//swaping using pointer reference
    // cout<<x<<y<<endl;
    // return 0;
    int a = 5;

    cout<<"the factorial of a is "<<factorial(a)<<endl;
    
    int q = 1;
    cout<<"the sum of first 10 natural numbers are "<<count(q)<<endl;
    int f;
    cout<<"enter the position "<<endl;
    cin>>f;
    cout<<fibonacci(f)<<endl;
}
//defination
void sum(int a , int b){ //a and b are formal parameters
    cout<<"the sum of "<<a<< " and "<<b<<" is "<<a + b<<endl;
}
