// Arrays => a collection of items of similar types of stored in continguous memory locations
#include<iostream>
using namespace std; 

int main(){
    // Array declaration
    int arr[]= {1,2,3,4,5}; 
    cout<<arr[3]<<endl;
    cout<<arr[0]<<endl;

    int marks[4];
    marks[0]= 44;
    marks[1]= 35;
    marks[2]=45;
    marks[3]=50;

    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    marks[2] = -999; //you can change the value of array
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    //accessing the elements of array using for loop
    for (int i = 0; i < 4; i++)
    {
        cout<<"the value of marks : "<<marks[i]<<endl;
    }

    //acessing the address of all elements of array using while loop
    int i = 0;
    int* pointer = marks; //creating the pointer variable to store the array memory. like: p=0 | marks=44, p=1 | marks=35 and so on.
    while(i <4){
        cout<<"the address of "<<*pointer<<" is "<<pointer<<endl;
        pointer++; //incrementing the value, cause.....why not? lol
        i++;
    }

    //Array and Pointers
    int* num = marks;
    cout<<"the value of *num is "<<*num<<endl;
    cout<<"the value of *(num+1) is "<<*(num+1)<<endl;
    cout<<"the value of *(num+2) is "<<*(num+2)<<endl;
    cout<<"the value of *(num+3) is "<<*(num+3)<<endl;


    return 0;
}