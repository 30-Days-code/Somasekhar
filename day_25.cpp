//program to convert decimal_to_binary and vice-versa.
#include<iostream>
#include <stdio.h>
using namespace std;
void binary_to_decimal()
{
    int num, rem, temp, dec = 0, b = 1;
    cout<<"Enter the binary number to convert into decimal : ";
    cin>>num;
    temp = num;
    while (temp > 0)
    {
        rem = temp % 10;
        dec = dec + rem * b;
        b *= 2;
        temp /= 10;
    }
    cout<<"The decimal of "<<num<<" is "<<dec;
}
void decimal_to_binary()
{
    int a[10], n, i;    
    cout<<"Enter the decimal number to convert into binary: ";    
    cin>>n;    
    for(i=0; n>0; i++)    
    {    
    a[i]=n%2;    
    n= n/2;  
    }    
    cout<<"Binary of the given number= ";    
    for(i=i-1 ;i>=0 ;i--)
    cout<<a[i];
    cout<<endl;
}
int main()
{
    decimal_to_binary();
    binary_to_decimal();
    return 0;
}

