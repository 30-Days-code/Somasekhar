// Write a C++ program to Delete an Element from an Array in which a user inputs 
// an element to delete, the element is then searched in the array, if found, it is 
// deleted and the array is displayed and if not found, then a message
// “Element Not Found” is displayed.
#include<iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int arr[5],num,key=0;
    cout<<"Input 5 numbers to the array: \n";
    for(int i=0;i<5;i++)                                                //inputing array
    cin>>arr[i];
    cout<<"\nThank you\n";
    cout<<"Enter a number that you want to delete from the array:\n";   
    cin>>num;
    for(int i=0;i<5;i++)                                                //searching in the array
    {
        if(arr[i]==num)                                                 //if found then - deleted and elements are shifted
        {
            for(int j=i;j<5;j++)
            arr[j]=arr[j+1];
            cout<<"\ndeleted\n";
            break;
        }
        key++;                                                          //to know how many times loop excecuted
    }
    if(key==5)                                                          //if loop is complete then disp not found
    cout<<"\nElement Not Found\n";
    else
    for(int i=0;i<4;i++)                                                //else print array
    cout<<arr[i]<<endl;
    return 0;
}
