// Write a program using C++ template in which you have to create a function that 
// accepts both character type or integer type arrays, respectively, and prints the 
// content of the array as output. 
// [ NOTE : Use only ONE variable to accept for both the type of arrays 
// (No two separate variables) ]

#include<iostream>
#include <stdio.h>
using namespace std;

template <class disp>               //declaring a class disp(can be imagined as a big container)
void display(disp key)              //key is a variable of disp datatype declared above
{
    cout<<key<<"  ";
}

int main()
{
    int num[5];
    char ch[5];
    cout<<"enter the any 5 numbers: \n";
    for(int i=0;i<5;i++)            //inputing values
    {
        cin>>num[i];
    }
    cout<<"enter the any 5 characters: \n";
    for(int i=0;i<5;i++)            //inputing values
    {
        cin>>ch[i];
    }
    cout<<"\nthe arrays you entered is: \n";
    for(int i=0;i<5;i++)            //sending each element to display func
    {
        display(num[i]);
    }
    cout<<endl;
    for(int i=0;i<5;i++)            //sending each element to display func
    {
        display(ch[i]);
    }
    return 0;
}

