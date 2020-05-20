//Logic building of patterns like surely take dry runs with pen and paper
//Try to use break; continue; goto; etc to simplify the algorithm
//The following code will print a pattern of letters with a diamond shaped space in the centre.
#include<iostream>
#include <stdio.h>
using namespace std;

void upper_half(char input)
{
    int x=0;                                                                    //KEY VARIABLE used for decreasing a letter by -x in every line
    for(int tot=0;tot<=(int(input)-65);tot++)
    {
        for(int i=65;i<=int(input)-x;i++)                                       //prints the ascending order and decreses the final letter by x everytime
        cout<<char(i);
        
        for(int j=0;j<2*tot;j++)                                                //prints the spaces that increases by 2 everytime
        cout<<" ";
        
        for(int i=int(input)-x;i>=65;i--)                                       //prints the descending order and decreses the initial letter by x everytime
        cout<<char(i);
        
        cout<<endl;
        x++;
    }
}

void lower_half(char input)
{
    int x=1;                                                                    //KEY VARIABLE used for decreasing spaces by 2*x in every line
    for(int tot=0;tot<=(int(input)-65);tot++)
    {   
        if(tot==0)                                                              //to skip 1st line i.e "A_______________A" used continue keyword.
        continue;
        
        for(int i=65;i<=tot+65;i++)                                             //prints according to lines i.e for 2nd line tot=1 and prints till(A + tot)
        cout<<char(i);
        
        for(int j=2*(int(input)-65-x);j>0;j--)                                  //printing and decreasing spaces by 2*x in every line
        cout<<" ";
        
        for(int i=tot+65;i>=65;i--)                                             //prints according to lines i.e for 2nd line tot=1 and prints from(A + tot)
        cout<<char(i);
        
        cout<<endl;
        x++;
    }
}
int main()
{
    char alphabet;
    cout<<"Enter a letter from A-Z in capitals : ";
    cin>>alphabet;
    //the pattern can be solved by dividing it into two halves
    upper_half(alphabet);                                                       //prints the upper half i.e line 0 - line (tot lines)/2
    lower_half(alphabet);                                                       //prints the lower half i.e line (tot lines)/2 - line (tot lines)
    return 0;
}
//tip: try commenting the if block in lower_half() and put x=0
//see what gets printed and you will understand the flow of the algorithm more.
