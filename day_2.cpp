// Write a program to read and display information about employees and 
// managers.Employee is a class that contains employee number, name, address,
// and department. Manager class contains all information of the employee 
// class and a list of employees working under a manager. (Use the concept 
// of Inheritance to complete the program)


#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class Employee
{
    public:
    int employee_number;
    char employee_name[100];
    char employee_address[100];
    char employee_department[100];
    
    
    
    void enter_number()
    {
        cout<<"\nEnter the Employee number: ";
        cin>>employee_number;
    }
    
    void enter_name()
    {
        cout<<"\nEnter the Employee name: ";
        scanf("%s",&employee_name);
    }
    
    void enter_add()
    {
        cout<<"\nEnter the Employee address: ";
        scanf("%s",&employee_address);
    }
    
    void enter_dep()
    {
        cout<<"\nEnter the Employee's department: ";
        scanf("%s",&employee_department);
    }
    
   
    
   
    
};


class Manager : public Employee
{
     public:
     void display()
    {
        cout<<"\nThe Employee number: "<<employee_number;
        cout<<"\nThe Employee name: "<<employee_name;
        cout<<"\nThe Employee address: "<<employee_address;
        cout<<"\nThe Employee's department: "<<employee_department;
    }
};


int main()
{
    int number_of_employee=0;
    cout<<"Enter the number of employees: ";
    cin>>number_of_employee;
    
    
    Manager ob1[number_of_employee];
   for(int i=0;i<number_of_employee;i++)
   {
   ob1[i].enter_number();
   ob1[i].enter_name();
   ob1[i].enter_add();
   ob1[i].enter_dep();
   }
   
   for(int i=0;i<number_of_employee;i++)
   {
   ob1[i].display();
   }
    
    
    
    
    return 0;
}
