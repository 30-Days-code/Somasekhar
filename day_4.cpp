// Write a function to encode a string. The string should get converted 
// into an unrecognizable form.
// [Hint: You may change the ASCII code of the constituent 
// character by adding or subtraction a constant number from the 
// original ASCII value of the constituent characters.]


#include <stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

class encode
{
    char input[100];    //input character string
    int arr[100];
    int key=0;
    
    public:
    
    void enter()        //asks the input from user
    {
        key=0;
        cout<<"\nEnter the line\n(please input this character '~' after \nyou completed your text without space): ";
        cin>>(input);
    }
    
    void search()       //to know till when the user input ends
    {
        for (int i=0;i<100;i++)
       {
           key++;       //this will store the exact position of character ~
           
           //using ~ as a reference to know the last character given by user
           
           if(int(input[i])==126)   //126 is ascii value for '~'
           {
               break;
           }
       }
    }
    
    void encrypt()      //function for changing text in ascii form numbers
    {
        for(int i=0;i<key-1;i++)
       {
           arr[i]=input[i];
       }
       cout<<"the given input is encrypted";
    }
    
    void print()        //function to print ascii form numbers
    {
        cout<<"the encrypted input is: ";
        for(int i=0;i<key-1;i++)
       {
           cout<<arr[i];
       }
       
    }
    
    void decrypt()      //function for printing text form
    {
        cout<<"the decrypted output is: ";
        for(int i=0;i<key-1;i++)
       {
           cout<<char(arr[i]);
       }
    }
    
};


int main()
{
   encode obj;
   obj.enter();
   obj.search();
   obj.encrypt();
   
   int s;
   while(1)
   {
       cout<<"\nEnter \n1 to print the encrypted input\n2 to decrypt\n3 to encrypt a new line.\n";
       cin>>s;
       
       switch(s)        //using switch cases
       {
           case 1:
           {
               obj.print();
               break;
           }
           case 2:
           {
               obj.decrypt();
               break;
           }
           case 3:
           {
               obj.enter();
               obj.search();
               obj.encrypt();
           }
       }
   }
    return 0;
}

