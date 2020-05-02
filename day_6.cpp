// Suppose A, B, C are arrays of integers of size M, N, and M+N, respectively. 
// The numbers in array A appear in ascending order while the numbers in 
// array B appear in descending order. Write a user-defined function in C++ 
// to produce third array C by merging arrays A and B in Ascending order. 
// Use A, B, and C as arguments in the function.

#include<stdio.h>
#include<iostream>
using namespace std;


class number
{
    int m,n;
    public:
    number()
    {
        cout<<"\nEnter the value of m,n: \n";
        cin>>m>>n;
        int a[m],b[n];
        cout<<"\nEnter the values in the array A with "<<m<<" elements in ascending order: \n";
        for(int i=0;i<m;i++)        //inputing the values
        {
            cin>>a[i];
        }
        cout<<"\nEnter the values in the array B with "<<n<<" elements in descending order: \n";
        for(int i=0;i<n;i++)        //inputing the values
        {
            cin>>b[i];
        }
        attach(a,b,m,n);
    }
    void attach(int A[],int B[],int x,int y)
    {
        int c[x+y];
        for(int i=0;i<x;i++)
        {
            c[i]=A[i];
        }
        for(int i=x;i<x+y;i++)
        {
            c[i]=B[i-x];
        }
        for(int i=0;i<x+y;i++)
        {
            cout<<c[i]<<"\n";
        }
    }
};

int main()
{
    number ob;
    return 0;
}
