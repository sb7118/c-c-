// pointers in cpp.--> the data type which holds address of the otherdata types.
#include<iostream>
using namespace std; 

int main(){
    int a = 5;
    int* b= &a;
    int** c= &b; //pointer to pointer. XD lol
    /*
    & --> (address of) operator
    * --> (value at) Dereference operator
    */
   cout<<b<<" "<<&a<<endl; //prints address of a
   cout<<*b<<" "<<a<<endl; //prints the value contained by the address
    cout<<"the vlaue of c is "<<**c<<endl;
    cout<<"the address of c is "<<c<<endl;

    char name[2];
    cin>>name;
    char* poin = name;
    cout<<name<<endl;
    cout<<poin<<*poin<<endl;
    return 0;
}