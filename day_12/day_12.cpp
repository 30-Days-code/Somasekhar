// Write a function in C++ for storing a laptop’s details in a 
// binary file “LAPTOP.DAT” containing the objects of class LAPTOP (as defined below). 
// The user should enter the laptop details using write() function in the file and 
// the program should display the details of the laptop using read() function.

#include <stdio.h>
#include<fstream>
#include<iostream>
using namespace std;

class LAPTOP : public fstream           //inheriting fstream class so that LAPTOP class can directly access file open and close func.
{
    
    long ModelNo; 
    float RAM,HDD; 
    char Name[20]; 
    public: 
    void StockEnter()                   //function to enter the details
    { 
        cout<<"\n Enter Details of the Laptop :- ";
        cout<<"\n Model No. : "; 
        cin>>ModelNo;
        cout<<"\n RAM : "; 
        cin>>RAM;
        cout<<"\n HDD : "; 
        cin>>HDD;
        cout<<"\n Name : "; 
        cin>>Name;
    } 
    
    void StockDisplay()                 //function to display
    { 
        cout<<"\n Details of the Laptop :- ";
        cout<<"\n Model No. : "<<ModelNo;
        cout<<"\n RAM : "<<RAM;
        cout<<"\n HDD : "<<HDD;
        cout<<"\n Name : "<<Name;
    } 
    
    long ReturnModelNo() 
    { 
        return ModelNo;
    } 
 
};

int main()
{
    LAPTOP obj;
    
    obj.open("LAPTOP.DAT");
    obj.StockEnter();
    obj.write((char*)&obj,sizeof(obj));         //writing to file
    obj.close();
    
    obj.open("LAPTOP.DAT");
    obj.read((char*)&obj,sizeof(obj));          //reading from file
    obj.StockDisplay();
    obj.close();
    return 0;
}

