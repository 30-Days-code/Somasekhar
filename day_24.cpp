// Write a program in C++ using bitwise operators which should demonstrate the 
// basic functionalities of all the 6 bitwise operators in 6 different functions.
#include <stdio.h>
#include<iostream>
using namespace std;
void AND(int a,int b)
{
    cout<<"a & b = "<<(a & b)<<endl;
}
void OR(int a,int b)
{
    cout<<"a | b = "<<(a | b)<<endl;
}
void XOR(int a,int b)
{
    cout<<"a ^ b = "<<(a ^ b)<<endl;
}
void COMPLIMENTARY(int a,int b)
{
    cout<<" ~ a = "<<(~ a)<<endl;
    cout<<" ~ b = "<<(~ b)<<endl;
}
void SHIFT(int a,int b)
{
    int x;
    cout<<"Enter hoe many bits you want to shift : ";cin>>x;
    cout<<"Left shifting 'a' :a << "<<x<<" = "<<(a << x)<<endl;
    cout<<"Right shifting 'b' :b >> "<<x<<" = "<<(b >> x)<<endl;
}

int main()
{
    int a,b;
    cout<<"Enter two numbers : \n";cin>>a>>b;
    AND(a,b);
    OR(a,b);
    XOR(a,b);
    COMPLIMENTARY(a,b);
    SHIFT(a,b);
    return 0;
}


