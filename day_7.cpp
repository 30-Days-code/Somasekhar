// Define a class TravelPlan in C++ with the following descriptions:
// Private Members:
// PlanCode => of type long
// Place => of type character array (string)
// Number_of_travellers => of type integer
// Number_of_buses => of type integer
// Public Members:
// • A constructor to assign initial values of PlanCode as 1001, 
// place as "Agra", Number_of_travellers as 5, Number_of_buses as 1.
// • A function NewPlan() which allows user to enter 
// PlanCode, Place and Number_of_travellers. Also, assign the value of Number_of_buses
// as per the following conditions:
//         Number_of_travellers                            Number_of_buses 
//         Less than 20                                          1 
//         Equal to or more than 20 and less than 40             2 
//         Equal to 40 or more than 40                           3  
// • A function ShowPlan() to display the content of all the data members on screen.

#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;


class TravelPlan
{
    long PlanCode;
    string Place;
    int Number_of_travellers,Number_of_buses;
    public:
    
    TravelPlan()
    {
        PlanCode = 1001; 
        Place = "Agra";
        Number_of_travellers = 5;
        Number_of_buses = 1;
    }
    
    void NewPlan()
    {
        cout<<"Enter the PlanCode you want to visit: ";
        cin>>PlanCode;
        cout<<"Enter the Place you want to visit: ";
        cin>>Place;
        cout<<"Enter the no. of travellers: ";
        cin>>Number_of_travellers;
        if(Number_of_travellers<20)
        {
            Number_of_buses=1;
        }
        else if(Number_of_travellers>=20 && Number_of_travellers<40)
        {
            Number_of_buses = 2;
        }
        else
        {
            Number_of_buses=3;
        }
    }
    
    void show()
    {
        cout<<"\nPlanCode : "<<PlanCode;
        cout<<"\nPlace : "<<Place;
        cout<<"\nNumber of travellers : "<<Number_of_travellers;
        cout<<"\nNumber of buses : "<<Number_of_buses;
    }
};


int main()
{
    TravelPlan obj;
    obj.NewPlan();
    obj.show();
    return 0;
}
