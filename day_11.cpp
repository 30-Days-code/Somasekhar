// Write a program to multiply two 3x3 matrices, 
// where the user gives the input and the program give the output.

#include<iostream>
using namespace std;

class matrix
{
    public:
    
    int a[3][3];
   void enter()
    {
        cout<<"Enter the values in the matrix : \n";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<"a"<<i+1<<j+1<<": ";
                cin>>a[i][j];
            }
        }
    }
    
};
void mul(matrix m1, matrix m2)
{
    matrix ob;
    ob.a[0][0]=m1.a[0][0]*m2.a[0][0] + m1.a[0][1]*m2.a[1][0] + m1.a[0][2]*m2.a[2][0];
    ob.a[0][1]=m1.a[0][0]*m2.a[0][1] + m1.a[0][1]*m2.a[1][1] + m1.a[0][2]*m2.a[2][1];
    ob.a[0][2]=m1.a[0][0]*m2.a[0][2] + m1.a[0][1]*m2.a[1][2] + m1.a[0][2]*m2.a[2][2];
    
    ob.a[1][0]=m1.a[1][0]*m2.a[0][0] + m1.a[1][1]*m2.a[1][0] + m1.a[1][2]*m2.a[2][0];
    ob.a[1][1]=m1.a[1][0]*m2.a[0][1] + m1.a[1][1]*m2.a[1][1] + m1.a[1][2]*m2.a[2][1];
    ob.a[1][2]=m1.a[1][0]*m2.a[0][2] + m1.a[1][1]*m2.a[1][2] + m1.a[1][2]*m2.a[2][2];
    
    ob.a[2][0]=m1.a[2][0]*m2.a[0][0] + m1.a[2][1]*m2.a[1][0] + m1.a[2][2]*m2.a[2][0];
    ob.a[2][1]=m1.a[2][0]*m2.a[0][1] + m1.a[2][1]*m2.a[1][1] + m1.a[2][2]*m2.a[2][1];
    ob.a[2][2]=m1.a[2][0]*m2.a[0][2] + m1.a[2][1]*m2.a[1][2] + m1.a[2][2]*m2.a[2][2];
    
    cout<<"The Resultant matrix is \n";
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<ob.a[i][j]<<"  ";
        }
        cout<<"\n";
    }
    
}

int main()
{
    matrix m1,m2;
    m1.enter();
    m2.enter();
    void mul(matrix , matrix );
    mul(m1,m2);
    return 0;
}

