// Define a class Clothing in C++ with the following descriptions:
// Private Members:
// • Code => of type string
// • Type => of type string
// • Size => of type integer
// • Material => of type string
// • Price => of type float
// A function Calc_Price() which calculates and assign the values of GPrice as follows:
// For the value of Material as "COTTON":
//       Type                Price (Rs)
//       TROUSER              1500
//       SHIRT                1200
// For Material other than "COTTON" the above mentioned Price gets reduced by 25%.

// Public Members:
// • A constructor to assign initial values of Code, Type, 
// and Material with the word "NOT ASSIGNED" and Price with 0.
// • A function Enter() to input the values of the data members 
// Code, Type, Size, and Material and invoke the Calc_Price() function.
// • A function Show() to display the content of all the data 
// members for a Clothing.
// HERE I AM ASSUMING MY OWN RATES FOR THE GARMENTS.!

//for COTTON:-
// size      32       34       36
// shirt    1200     1275     1350
//trouser   1500     1593.75  1687.5

//for SILK:-
// size      32       34       36
// shirt    900      956.25   1012.5
//trouser   1125     1195.31     1265.62



#include <stdio.h>
#include<iostream>
using namespace std;


class Clothing
{
    string Code,Type,Material;
    int Size;
    float Price;
    
    public:
    
    Clothing()          //default constructor for initialisation of values.
    {
        Code="NOT ASSIGNED";
        Type="NOT ASSIGNED";
        Material="NOT ASSIGNED";
        Price=0;
        Size=32;
    }
    void enter()        //function for input from user.
    {
        cout<<"\nEnter the Material you want- cotton or silk \n";
        cin>>Material;
        cout<<"Enter the type you want 'S' for shirt, 'T' for trouser \n";
        cin>>Type;
        cout<<"Enter the size you want- 32,34,36 \n";
        cin>>Size;
        cout<<"Enter the Promo code of the type you want\n";
        cin>>Code;
        
    }
    
    float Calc_Price(string s1,string s2,int a,string s3)         //s1,s2,s3,denote Material,Type,Code and a for size
    {
        if(s1=="cotton")                //using if-else to eliminate the other options
        {
            if(s2=="S")
            {
                Price=37.5*a;           //price of every product is a product of a specific number and its size
                return Price;
            }
            else
            {
                Price=46.875*a;         //price of every product is a product of a specific number and its size
                return Price;
            }
        }
        else
        {
            if(s2=="S")
            {
                Price=28.125*a;         //price of every product is a product of a specific number and its size
                return Price;
            }
            else
            {
                Price=35.15625*a;       //price of every product is a product of a specific number and its size
                return Price;
            }
        }
        return 0;
    }
    
    void show()                     //to print all the info about the product.
    {
        cout<<"\nPRICE: "<<Calc_Price(Material,Type,Size,Code);
        if(Type=="S")               //reassigning the real full form to print for user.
        {
            Type="shirt";
        }
        else                        //reassigning the real full form to print for user.
        {
            Type="Trouser";
        }
        cout<<"\nHere is the final data: \n"<<Material<<"\n"<<Type<<"\n"<<Size<<"\n"<<Code<<"\n";
              //this is another type of manupulating datatype.
    }
    
    ~Clothing()                     //using destructor as an ending sign.
    {
        cout<<"\n THANK YOU !!! \n";
    }
};

int main()
{
    Clothing obj;
    obj.enter();
    obj.show();

    return 0;
}

