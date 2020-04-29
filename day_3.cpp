
#include <stdio.h>
#include<iostream>
using namespace std;



class Num
{
    protected:
    int a[3]={0,0,0};
    int x=0,count=0;
    
    
    public:
    int number;
    
    Num()//default constructor
    {
        cout<<"Enter a number";
        cin>>number;
    }
    
    void seperate()
    {
        for(int i =0;i<3;i++)// loop to sperate the numbers of the input
        {
            count++; //to keep track about how many digits does the number have
            if(number<10)
            {
                a[i]=number;
                break;
            }
            a[i]=number%10;
            x=number/10;
            number=x;
            
        }
    }
    void print()
    {
        for(int i =count-1;i>=0;i--)//to print the number according to count 
        {
            cout<<a[i]<<"\n";
        }
    }
    
};

int main()
{
   Num obj;
   obj.seperate();
   obj.print();
   
    return 0;
}



