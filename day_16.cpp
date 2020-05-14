#include<iostream>
#include <stdio.h>
using namespace std;

class Calculator
{
    float CRadius;
    long RLength, RBreath, RHeight;
    long SWidth;
    float THeight, TBase;
    public:
    Calculator() 
    { 
        CRadius=1; 
        RLength=RBreath=1; 
        SWidth=1;
        THeight=TBase=1; 
    }
    friend float AreaOfCircle(Calculator Ob);               // To calculate Area Of Circle
    friend long AreaOfRectangle(Calculator Ob);             // To calculate Area Of Rectangle
    friend long AreaOfSquare(Calculator Ob);                // To calculate Area Of Square
    friend float AreaOfTriangle(Calculator Ob);             // To calculate Area Of Triangle
};

float AreaOfCircle(Calculator Ob)
{
    return Ob.CRadius*Ob.CRadius*3.14;
}

long AreaOfRectangle(Calculator Ob)
{
    return Ob.RLength*Ob.RBreath;
}

long AreaOfSquare(Calculator Ob)
{
    return Ob.SWidth*Ob.SWidth;
}

float AreaOfTriangle(Calculator Ob)
{
    return (Ob.TBase*Ob.THeight)/2.0;
}

int main()
{
    Calculator Ob;
    cout<<"\nthe area of the circle is : "<<AreaOfCircle(Ob);                   //Remember a friend function is not a member function
    cout<<"\nthe area of the Rectangle is : "<<AreaOfRectangle(Ob);             //of any class !
    cout<<"\nthe area of the Square is : "<<AreaOfSquare(Ob);                   //it can be called as a normal func without the obj.
    cout<<"\nthe area of the Triangle is : "<<AreaOfTriangle(Ob);
    return 0;
}

