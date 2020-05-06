#include<iostream>
#include <stdio.h>
#include<fstream>
#include<string>
using namespace std;

int count_words(string input)
{
    int x=0;
    for(int i=0;i<input.length();i++)
    {
        if(input[i]==32)        //by using ascii values the space has the value as 32 
        {
            x++;
        }
    }
    return x+1;                 //x+1 gives the number of words because x counts the number of spaces
}

int count_char(string input)
{
    int x=0;
    for(int i=0;i<input.length();i++)
    {
        if(input[i]==32)        //by using ascii values the space has the value as 32 
        {
            x++;
        }
    }
    return input.length()-x;    //input.length()-x gives the number of char elxcluding the spaces
}

int count_uppercase(string input)
{
    int x=0;
    for(int i=0;i<input.length();i++)
    {
        if(input[i]>=65 && input[i]<=90)        //by using ascii values the uppercase letters have value between 65 to 90 
        {
            x++;
        }
    }
    return x;
}

int count_to(string input)
{
    int x=0;
    for(int i=0;i<input.length()-2;i++)
    {
        if(input[i]==116 && input[i+1]==111 )           //if 'to'
        {
            x++;
        }
        else if(input[i]==84 && input[i+1]==111 )       //if 'To'
        {
            x++;
        }
        else if(input[i]==84 && input[i+1]==79 )        //if 'TO'
        {
            x++;
        }
    }
    return x;
}

int count_the(string input)
{
    int x=0;
    for(int i=0;i<input.length()-3;i++)
    {
        if(input[i]==116 && input[i+1]==104 && input[i+2]==101 )        //if 'the'
        {
            x++;
        }
        else if(input[i]==84 && input[i+1]==104 && input[i+2]==101 )    //if 'The'
        {
            x++;
        }
        else if(input[i]==84 && input[i+1]==72 && input[i+2]==69 )      //if 'THE'
        {
            x++;
        }
    }
    return x;
}



int main()
{
    string input;
    cout<<"Enter a line :\n";
    getline(cin,input);
    
    ofstream file("file.txt");
    file<<input;
    file.close();
    cout<<"INPUT successfull.!\n";
    
    int count_uppercase(string );
    cout<<"the number of uppercase letters in the input are :"<<count_uppercase(input)<<endl;
    
    int count_to(string );
    cout<<"the number of 'to' in the input are : "<<count_to(input)<<endl;
    
    int count_the(string );
    cout<<"the number of 'the' in the input are : "<<count_the(input)<<endl;
    
    int count_words(string );
    cout<<"the number of words in the input are : "<<count_words(input)<<endl;
    
    int count_char(string );
    cout<<"the number of characters in the input are : "<<count_char(input)<<endl;
    
    return 0;
}


