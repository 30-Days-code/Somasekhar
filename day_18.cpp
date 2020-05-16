// Write a program in C++ use operator overloading for creating a simple calculator 
// program having functions for addition, subtraction, multiplication, division, 
// and modulus.

#include <stdio.h>
#include<iostream>
using namespace std;

class number
{
    public:
    int num;
    
    void enter()
    {cout<<"\nEnter the number : ";cin>>num;}
    
    void print()
    {cout<<"\nResult: "<<num;}
    
    number operator +(number ob)
    {
        number temp;
        temp.num=num+ob.num;
        return temp;
    }
    number operator -(number ob)
    {
        number temp;
        temp.num=num-ob.num;
        return temp;
    }
    number operator *(number ob)
    {
        number temp;
        temp.num=num*ob.num;
        return temp;
    }
    number operator /(number ob)
    {
        number temp;
        temp.num=num/ob.num;
        return temp;
    }
    number operator %(number ob)
    {
        number temp;
        temp.num=num%ob.num;
        return temp;
    }
};



int main()
{
    number n1,n2,n3;
    n1.enter();n2.enter();
    int s;                                              //for switch case
    cout<<"\n Enter \n1 to add\n2 to subtract\n3 to multiply\n4 to divide\n5 for modulus\n";
    cin>>s;
    switch(s)
    {
        case 1: {n3=n1+n2;n3.print();break;}
        case 2: {n3=n1-n2;n3.print();break;}
        case 3: {n3=n1*n2;n3.print();break;}
        case 4: {n3=n1/n2;n3.print();break;}
        case 5: {n3=n1%n2;n3.print();break;}
        default: cout<<"\nInvalid input";
    }
    return 0;
}

