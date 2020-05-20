#include<iostream>
#include <stdio.h>
using namespace std;

void upper_half(char input)
{
    int x=0;
    for(int tot=0;tot<=(int(input)-65);tot++)
    {
        for(int i=65;i<=int(input)-x;i++)
        cout<<char(i);
        
        for(int j=0;j<2*tot;j++)
        cout<<" ";
        
        for(int i=int(input)-x;i>=65;i--)
        cout<<char(i);
        
        cout<<endl;
        x++;
    }
}

void lower_half(char input)
{
    int x=1;
    for(int tot=0;tot<=(int(input)-65);tot++)
    {   
        if(tot==0)
        continue;
        for(int i=65;i<=tot+65;i++)
        cout<<char(i);
        
        for(int j=2*(int(input)-65-x);j>0;j--)
        cout<<" ";
        
        for(int i=tot+65;i>=65;i--)
        cout<<char(i);
        
        cout<<endl;
        x++;
    }
}


int main()
{
    char alphabet;
    cout<<"Enter a letter from A-Z in capitals : ";
    cin>>alphabet;
    upper_half(alphabet);
    lower_half(alphabet);
    return 0;
}

