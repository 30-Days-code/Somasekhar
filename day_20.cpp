// Write a program in C++ using math library in C++, which will have the following functions :-
// • A function to find All Roots of a Quadratic Equation
// • A function to find Direction Ratios of a Line in an XYZ plane
// • A function to find Angle Between Two Lines in an XYZ plane
// • A function of an equation/theorem which you know and can code

#include <stdio.h>
#include<iostream>
#include<cmath>
using namespace std;
void roots()
{
    int a,b,c;
    float r1,r2;
    cout<<"Enter the coefficients :\n";
    cout<<"a: ";cin>>a;
    cout<<"b: ";cin>>b;
    cout<<"c: ";cin>>c;
    int discriminant=b*b-(4*a*c);
    if(discriminant<0)
    {
        cout<<"The roots are r1= "<<-b / (2 * a)<<" + "<<sqrt(-discriminant) / (2 * a)<<"i"<<", r2= "<<-b / (2 * a)<<" - "<<sqrt(-discriminant) / (2 * a);
    }
    else if(discriminant==0)
    {
        r1 = r2 = -b / (2 * a);
        cout<<"The roots are r1 = r2 = "<<r1;
    }
    else if (discriminant > 0) 
    {
        r1 = (-b + sqrt(discriminant)) / (2 * a);
        r2 = (-b - sqrt(discriminant)) / (2 * a);
        cout<<"root1 = "<<r1<<" and root2 = "<<r2;
    }
}
void pythagorous()
{
    int b,p,h;
    cout<<"Enter the 3 sides of the triangle:\n";
    cout<<"longest side: ";
    cin>>h;
    cout<<"\nRemaining 2 sides : ";
    cin>>b>>p;
    if(h==hypot(p,b))
    cout<<"The triangle is right angled triangle.";
    else
    cout<<"The triangle is not a right angled triangle.";
}
void drs_lines()
{
	float x,y,z;
	cout<<"Enter the angles with :\n";
	cout<<"x-axis :";
	cin>>x;
	cout<<"y-axis :";
	cin>>y;
	cout<<"z-axis :";
	cin>>z;
	cout<<"The Direction cosines are : "<<cos(x)<<","<<cos(y)<<","<<cos(z);
}
void angle_lines()
{
    //check how to calculate tan inverse.
}
int main()
{
    int s;
    cout<<"Enter\n1 to know roots of a quadratic eq.\n2 to calc DR's of line\n3 to calc angle between lines\n4 to know a triangleis right angled or not.\n";
    cin>>s;
    switch(s)
    {
        case 1:{roots();break;}
        case 2:{drs_lines();break;}
        case 3:{angle_lines();break;}
        case 4:{pythagorous();break;}
    }
    return 0;
}

