
#include <stdio.h>
#include<iostream>
using namespace std;



class Num
{
    public:
    int a[3]={0,0,0};
    int x=0,count=0;
    int number;
    
    Num()//default constructor
    {
        cout<<"\nEnter a number\n";
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
    
};

class words : public Num
{
    string s[3];
    int j=0;
    public:
    void printer()
    {
        if(count==3)        // if the input is a 3 digit number
        {
            for(int i=count-1;i>=0;i--)
            {
                
                if(a[i]==1)
                {
                    s[j]="one";
                    j++;
                }
                else if(a[i]==2)
                {
                    s[j]="two";
                    j++;
                }
                else if(a[i]==3)
                {
                    s[j]="three";
                    j++;
                }
                else if(a[i]==4)
                {
                    s[j]="four";
                    j++;
                }
                else if(a[i]==5)
                {
                    s[j]="five";
                    j++;
                }
                else if(a[i]==6)
                {
                    s[j]="six";
                    j++;
                }
                else if(a[i]==7)
                {
                    s[j]="seven";
                    j++;
                }
                else if(a[i]==8)
                {
                    s[j]="eight";
                    j++;
                }
                else if(a[i]==9)
                {
                    s[j]="nine";
                    j++;
                }
                
            }
          cout<<s[0]<<" Hundred and "<<s[1]<<"ty "<<s[2];  
        }
        
        else if(count==2)       //if the input is a 2 digit number
        {
            if(a[1]==1)
            {
               if(a[0]==0)
               {
                   cout<<"ten";
               }
               else if(a[0]==1)
               {
                   cout<<"eleven";
               }
               else if(a[0]==2)
               {
                   cout<<"twelve";
               }
               else if(a[0]==3)
               {
                   cout<<"thirteen";
               }
               else if(a[0]==4)
               {
                   cout<<"fourteen";
               }
               else if(a[0]==5)
               {
                   cout<<"fifteen";
               }
               else if(a[0]==6)
               {
                   cout<<"sixteen";
               }
               else if(a[0]==7)
               {
                   cout<<"seventeen";
               }
               else if(a[0]==8)
               {
                   cout<<"eighteen";
               }
               else if(a[0]==9)
               {
                   cout<<"nineteen";
               }
            }
            
            else
            {
                for(int i=count-1;i>=0;i--)
                {
                    
                    if(a[i]==1)
                    {
                        s[j]="one";
                        j++;
                    }
                    else if(a[i]==2)
                    {
                        s[j]="two";
                        j++;
                    }
                    else if(a[i]==3)
                    {
                        s[j]="three";
                        j++;
                    }
                    else if(a[i]==4)
                    {
                        s[j]="four";
                        j++;
                    }
                    else if(a[i]==5)
                    {
                        s[j]="five";
                        j++;
                    }
                    else if(a[i]==6)
                    {
                        s[j]="six";
                        j++;
                    }
                    else if(a[i]==7)
                    {
                        s[j]="seven";
                        j++;
                    }
                    else if(a[i]==8)
                    {
                        s[j]="eight";
                        j++;
                    }
                    else if(a[i]==9)
                    {
                        s[j]="nine";
                        j++;
                    }
                    
                }
              cout<<s[0]<<"ty "<<s[1];
            }
            
            
            
        }
        
        else if(count==1)// if the input is one digit number
        {
               if(a[0]==0)
               {
                   cout<<"zero";
               }
               else if(a[0]==1)
               {
                   cout<<"one";
               }
               else if(a[0]==2)
               {
                   cout<<"two";
               }
               else if(a[0]==3)
               {
                   cout<<"three";
               }
               else if(a[0]==4)
               {
                   cout<<"four";
               }
               else if(a[0]==5)
               {
                   cout<<"five";
               }
               else if(a[0]==6)
               {
                   cout<<"six";
               }
               else if(a[0]==7)
               {
                   cout<<"seven";
               }
               else if(a[0]==8)
               {
                   cout<<"eight";
               }
               else if(a[0]==9)
               {
                   cout<<"nine";
               }
        }
    }
};





int main()
{
   while(1)
   {
   words obj;
   obj.seperate();
   obj.printer();
   }
   
    return 0;
}

