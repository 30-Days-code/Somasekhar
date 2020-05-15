// Write a program in C++ using exception handling in which you have to ask the 
// user to enter the marks of a Student for subjects like English, Chemistry, ADS, and Maths.
// If the user exceeds the range of marks (if below 0 or above 100) in a particular subject, 
// the program should throw an error “Invalid Marks” to the user and repeat the above processes 
// until the use enters the correct marks. [NOTE : Try to use try{} block, catch{} block, throw() 
// function (all of them, if possible) in your program]


#include <stdio.h>
#include<iostream>
using namespace std;

class subject
{
    int marks;                                          //marks for each object
    public:
    subject()                                           //default constructor for input marks
    {
        cin>>marks;
    }
    friend void error_finding(subject *ob);             //function to check marks are valid or not
};
void error_finding(subject *ob)                         //call by reference for the object
{
    try                                                 //exception handling
    {
        if(ob->marks==0 || ob->marks>100)
        throw ob->marks;
    }
    catch(int x)                                        //recieving marks as int x    
    {
        cout<<"\nSorry, invalid input !!\n Marks cant be : "<<x;
        cout<<"\n Re-enter marks : ";
        cin>>ob->marks;                                 //inputing new marks at the same address
    }
}
int main()
{
    cout<<"\nEnter the marks of English : ";
    subject eng;
    error_finding(&eng);
    cout<<"\nEnter the marks of Chemistry : ";
    subject chem;
    error_finding(&chem);
    cout<<"\nEnter the marks of ADS : ";
    subject ads;
    error_finding(&ads);
    cout<<"\nEnter the marks of Maths : ";
    subject maths;
    error_finding(&maths);
    return 0;
}

