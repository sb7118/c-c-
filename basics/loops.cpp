// loops are the statements which continues to repeat the certain block of code until the condition becomes true
#include<iostream>
using namespace std;
int for_loop();
int while_loop();
int do_while_loop();

int main(){
    // for_loop();//for loop
    // while_loop();
    do_while_loop();
    return 0;
}

int for_loop(){
    for (int i = 1;i <= 10;i++){
        cout<<i<<endl;
    }
    return 0;
}

int while_loop(){
    int i=10;
    while (i!=0){
        cout<<i<<" ";
        i--;
    }
    return 0;
}

int do_while_loop(){
    int i=1;
    do
    {
        cout<<i<<" ";
        i++;
    } while (i<=10);
    

    return 0;
}