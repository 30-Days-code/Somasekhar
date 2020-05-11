// Write a program in C++ using control statements which will have the following functions :-

//       *
//      * * *
//   * * * * *
//  * * * * * * *

//         1
//       2 3 2
//     3 4 5 4 3
//   4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5


//  * * * * * * 
//   * * * * *
//     * * *
//       *
       
// •Pascal's Triangle

//               1
//             1   1
//           1   2   1
//         1   3   3   1
//       1   4   6   4   1
//   1   5   10   10   5   1
   
// •Floyd's Triangle

// 1
// 2 3
// 4 5 6
// 7 8 9 10

// https://www.youtube.com/watch?v=cWndUxxW43g (refer for logic builing)

#include <stdio.h>
#include<iostream>
using namespace std;

class reverse_pyramid
{
    public:
    reverse_pyramid()
    {
        for(int i=4;i>=1;i--)
        {
            for(int j=4;j>=i;j--)
            {
                if(j==4)
                {}
                else
                cout<<"   ";
            }
            for(int k=1;k<=2*i-1;k++)
            {
                cout<<" * ";
            }
            cout<<endl;
        }
    }
};

class pyramid
{
    public:
    pyramid()
    {
        for(int i=1;i<=4;i++)
        {
            for(int j=4;j>=i;j--)
            {
                cout<<"   ";
            }
            for(int k=1;k<=2*i-1;k++)
            {
                cout<<" * ";
            }
            cout<<endl;
        }
    }
};

class number_pyramid
{
    public:
    number_pyramid()
    {
        for(int i=1;i<=5;i++)
        {
            for(int j=5;j>=i;j--)
            {
                cout<<" ";
            }
            for(int k=i;k<=2*i-1;k++)
            {
                cout<<k;
            }
            for(int k=2*i-2;k>=i;k--)
            {
                cout<<k;
            }
            cout<<endl;
        }
    }
};

class Floyd_triangle
{
    public:
    Floyd_triangle()
    {
        int x=1;
        for(int i=1;i<=4;i++)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<x<<" ";
                x++;
            }
            cout<<endl;
        }
    }
};


int fact(int x)
    {
        int factorial=1;
        if(x==1||x==0)
        {
            return factorial;
        }
        else
        {
            factorial=x*fact(x-1);
        }
    }
int main()
{
    int fact(int );
    reverse_pyramid a;
    cout<<"\n\n";
    pyramid b;
    cout<<"\n\n";
    number_pyramid c;
    cout<<"\n\n";
    Floyd_triangle d;
    cout<<"\n\n";
    cout<<"     1"<<endl;
    for(int i=1;i<=5;i++)
    {
        for(int j=4;j>=i;j--)
        {
            cout<<" ";
        }
        int n=i;
        for(int r=0;r<=n;r++)
        {
            cout<<fact(n)/(fact(n-r)*fact(r))<<" ";
        }
        cout<<endl;
    }
    return 0;
}

