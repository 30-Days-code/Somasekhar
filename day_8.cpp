// Write a program that invokes a function newdate() to return an object of date type. 
// The function newdate() takes two parameters: an object olddate of date type and 
// number of days (int) to calculate the newdate as olddate + number of days and returns the newdate.

#include <stdio.h>
#include<iostream>
using namespace std;

class temp
{
    int date=1;
    public:
    void disp_date()
    {
        cout<<"date: ";
        cout<<date;
    }
    temp newdate(temp ob, int i)
    {
        ob.date = ob.date+i;    //updating the new date
        return ob;
    }
};

int main()
{
    temp obj;               //initial object
    int n;
    obj.disp_date();        //initial date display
    cout<<"\nEnter number of days to be added: \n";
    cin>>n;
    obj=obj.newdate(obj,n); //sending obj and no. of days to be added
    obj.disp_date();        //displaying new date.
    return 0;
}


