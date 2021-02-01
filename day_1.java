/*DAY 1 
Ques. (1) Write a program in java using if-else statements to accept 6 subjects 
and prints the result with the first 5 subjects with highest marks.
Source: https://www.javatpoint.com/java-if-else
Solution ref: https://www.geeksforgeeks.org/how-to-create-array-of-objects-in-java/
*/

import java.lang.*;
import java.util.*;

public class day_1
{
	public static void main(String args[])
	{
	    Subject[] s = new Subject[5];
	    for(int i=0;i<5;i++)
	    {
	        s[i] = new Subject();
		    s[i].input();
	    }

		int smallest = s[0].marks;
		int flag=0;
		for(int i = 1;i<5;i++ )
		{
		    if(smallest > s[i].marks)
		    {
		        smallest = s[i].marks;
		        flag = i;
		    }
		}
		
		for(int i=0;i<5;i++)
	    {
	        if(i!=flag)
		    s[i].output();
	    }
	}
}

class Subject
{
	String name;
	int marks;
	
	void input()
	{
		Scanner s = new Scanner(System.in);
		System.out.println("Enter the name and the marks of the subject");
		name = s.nextLine();
		marks = s.nextInt();
	}
	void output()
	{
		System.out.println("The marks in the subject : " + this.name + " is " + this.marks);
	}
}