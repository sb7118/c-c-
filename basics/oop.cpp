#include<iostream>
using namespace std; 

// making the promotion method simple
class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};

class Employee:AbstractEmployee{ //Emlpoyee class is signed to AbstractEmployee class
    // private:
    protected:
        string Name;
        string Company;
        int Age ;
        int Salary;
    //using public cuz its private by default
    public:
    //setters and getters
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        Age = age;
    }
    int getAge(){
        return Age;
    }
    void setSalary(int salary){
        Salary = salary;
    }
    int getSalary(){
        return Salary;
    }
        
        void  Introduction(){

        cout<<"Employee name = "<<Name<<" and age = "<<Age<<endl;
        cout<<"Company name "<<Company<<" and of salary "<<Salary<<endl;
    }
        //permission for the signed class (AbstractEmployee).
        void AskForPromotion(){
            if(Age>20){
                cout<<Name<<" got promoted!"<<endl;
            }else{
                cout<<Name<<" , sorry No promotion for you"<<endl;
            }
        }
    //constructor
    /*Rules for making a constructure:
    1- a constructure must have the same name of its respective classes.
    2- a constructure should always lies on public.
    3- a constructure does not have return type.
    */
    Employee(string name,string company, int age, int salary){
        Name = name;
        Company = company;
        Age = age;
        Salary = salary;
    }
};
// inheritance
class Developer: public Employee{ //the inheritance is private by default
    public:
        string FavProgrammingLanguage;

    // constructure
    Developer(string name,string company, int age, int salary,string favProgrammingLanguage)
    :Employee(name,company,age,salary) //Employee should be constructure , not class
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    // method
    void FixBug(){
            cout<<Name<<" Fixed the bug using "<<FavProgrammingLanguage<<endl;
        }
};

int main(){
    Developer dev1 = Developer("sujan","Pixure.co",21,10000,"c++");
    dev1.FixBug();
    dev1.AskForPromotion();
    //Employee = class name , employee1 = user defined data
    // Employee employee1 = Employee("sachita","Pixure.co",18,899);
    // employee1.Name = "sachita";
    // employee1.Company = "Pixure.co";
    // employee1.Age = 18;
    // employee1.Salary = 900; 

    // employee1.Introduction();
    // employee1.AskForPromotion();

    // Employee employee2 = Employee("roshan","Pixure.co",18,1000);
    // employee2.Name = "roshan";
    // employee2.Company = "Pixure.co";
    // employee2.Age = 18;
    // employee2.Salary = 1200;

    // employee2.Introduction();
    // employee2.AskForPromotion();
    // employee1.setSalary(69);
    // cout<<employee1.getName()<< " is a hardworking employee, but becuz of the attitude , her salary is "<<employee1.getSalary()<<endl;

    return 0;
}