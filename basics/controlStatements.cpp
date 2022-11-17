/* basic control flow statements.
    1) if-else statements.
    2) if-else ladder (multiple else if) statements
    3) switch case statements
 */
#include<iostream>
#include<string>
using namespace std;
void if_else();
void if_else_if();
void switch_case();

int main(){ 
    // if_else();//if else statement
    // if_else_if();//if else ladder statement
    switch_case(); //switch case statement
    return 0;
}
void if_else(){
    int age=17;
    if(age<18){
        cout<<"you are under 18"<<endl;
    }else{
        cout<<"you are above or equal to 18"<<endl;
    }
}

void if_else_if(){

    int age=8;
    if((age<18) && (age>1)){
        cout<<"you can not enter da party"<<endl;
    }
    else if(age==18){
        cout<<"come on in , young brat"<<endl;
    }
    else{
        cout<<"come on in , old hag";
    }

}

void switch_case(){
    // string s;
    int age;
    cout<<"how old are you?"<<endl;
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"hello buddy"<<endl;
        break;
    
    case 17:
        cout<<"hello brat"<<endl;
        break;
    default:
        cout<<"hello old fart"<<endl;
        break;
    }
    
}