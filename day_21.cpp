// Write a program in C++ using goto statements that calculates the occupancy rate
// for a hotel in which the program will ask the user, how many floors the hotel has,
// and then the number of rooms on each floor and how many of them are occupied on that floor.
// After that, the program should display the total number of rooms the hotel has, 
// the total number of rooms that are occupied, the total number of rooms that are 
// unoccupied, and the percentage of the total rooms that are occupied.
// NOTE :-
// It is a tradition that most hotels do not have a thirteenth floor so the program
// should skip the entire thirteenth floor.
// Do not accept a value less than 1 for the number of floors. 
// Do not accept a number less than 5 for the number of rooms on a floor.

#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int num_floor,num_room[num_floor],num_occu_each_floor[num_floor];  //number of floors, rooms on each floor, occupied on each floor
    int tot_room=0,tot_occupied=0;
    float percentage=0.0;
    cout<<"\nEnter the following data : \n";
    
    enter_floor:                                                        //LABEL 
    
    cout<<"\nTotal number of floors in the hotel : ";
    cin>>num_floor;
    if(num_floor<=1)
    {cout<<"floors cant be less than 1\n";goto enter_floor;}
    
    enter_room:                                                         //LABEL
    
    for(int i=0;i<num_floor;i++)
    {
        if(i==13)
        {num_room[i]=0;num_occu_each_floor[i]=0; goto skip_13;}
        
        cout<<"\nNumber of rooms in floor "<<i+1<<": ";
        cin>>num_room[i];
        if(num_room[i]<5)
        {cout<<"Rooms cant be less than 5\n";goto enter_room;}
        
        enter_room_occupied:                                            //LABEL
        
        cout<<"\nNumber of rooms occupied in this floor : ";
        cin>>num_occu_each_floor[i];
        if(num_occu_each_floor[i]>num_room[i])
        {cout<<"total rooms on this floor are only "<<num_room[i]<<endl;goto enter_room_occupied;}
        
        skip_13:           ;                                             //LABEL
    }
    for(int i=0;i<num_floor;i++)
    {
        tot_room=tot_room+num_room[i];
    }
    cout<<"\nTotal rooms in the hotel are: "<<tot_room;
    for(int i=0;i<num_floor;i++)
    {
        tot_occupied=tot_occupied+num_occu_each_floor[i];
    }
    cout<<"\nTotal rooms occupied in the hotel are: "<<tot_occupied;
    cout<<"\nTotal rooms left vacant in the hotel are: "<<tot_room - tot_occupied;
    percentage = ((tot_room - tot_occupied)/float(tot_room))*100.0;
    cout<<"\nTotal occupancy percentage is: "<<percentage;
    return 0;
}

