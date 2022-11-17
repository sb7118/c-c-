#include<iostream>
using namespace std; 
void structure();
void Union();

//example of structure
typedef struct employee //or only struct employee will do but also remove ep along with type def
{
    /* data */
    int id;
    char favChar;
    float salary;
}ep;

//example of union
typedef union grocery
{
    int rice; 
    char car;
    float height;
} $;

int main(){
    structure();
    Union();
    return 0;
}

void structure(){
    ep bipin;
    //struct employee bipin
    ep Pixure; 
    //struct employee Pixure
    Pixure.id = 0;
    Pixure.favChar = 'c';
    Pixure.salary = 100000;

    cout<<"Pixy's id is "<<Pixure.id<<endl;
    cout<<"Pixy's favChar is "<<Pixure.favChar<<endl;
    cout<<"Pixy's salary is $"<<Pixure.salary<<endl;
}

void Union(){
    $ pixy; 
    pixy.rice = 0;
    pixy.car = 'a';
    pixy.height = 6.11;

    cout<<"pixy bought rice of $"<<pixy.rice<<endl;
    // cout<<"pixy have a car called "<<pixy.car<<endl;
    cout<<"pixy's height is "<<pixy.height<<endl;
}