// Complete the class with all function definitions for a Circular Array Queue. 
// Use another queue to transfer data temporarily.


#include<iostream>
#include <stdio.h>
using namespace std;

class Queue
{

  int data[10];
  int front, rear;
  int size=10;

  public :

  Queue() 
  { 
       front = - 1;  
       rear = - 1; 
  }

  void Add(int key)                                                                    //to add an element into the queue
  {
      if ((front == 0 && rear == size-1) || (rear == (front-1)%(size-1))) 
    { 
        cout<<"\nqueue full\n";
        return; 
    } 
  
    else if (front == -1) 
    { 

        front = rear = 0; 
        data[rear] = key; 
    } 
  
    else if (rear == size-1 && front != 0) 
    { 
        rear = 0; 
        data[rear] = key; 
    } 
  
    else
    { 
        rear++; 
        data[rear] = key; 
    } 
  }

  int Remove()                                                                  //to remove an element from the front of the queue
  {
      if (front == -1) 
    { 
        cout<<"\nempty\n"; 
    } 
  
    int key = data[front]; 
    data[front] = -1;
    
    if (front == rear) 
    { 
        front = -1; 
        rear = -1; 
        cout<<"\ndeleted! \n";
    } 
    else if (front == size-1) 
        {front = 0; 
        cout<<"\ndeleted! \n";}
    else
    {
        front++; 
        cout<<"\ndeleted! \n";
    }
    return key;
  }

  void Delete(int ITEM)                                                        //to delete all elements whose Data is equal to ITEM
  {
      //sorry i gave on this ! ("-_-) 
  }

};


int main()
{
    Queue obj,obj2;
    int choice,key;
    cout<<"\n1.insert an element\n2.Delete an element\n";  
    cout<<"\nEnter your choice ?";  
    cin>>choice;  
        switch(choice)  
        {  
            case 1:
            {
                cout<<"enter a value : \n";
                cin>>key;
                obj.Add(key);  
            }        
            break;  
            case 2:  
            key=obj.Remove();  
            obj2.Add(key);
            break;  
            default:   
            cout<<"\nEnter valid choice? \n";  
        }  
    return 0;
}
