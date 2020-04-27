// Define a class to represent a book in a library. 
// Include the following members: -

// Data Members: 
// Book Number, Book Name, Author, Publisher, Price, No. of copies issued, No. of copies
 
// Member Functions:
// (i)	To assign initial values 
// (ii)	To issue a book after checking for its availability 
// (iii)	To return a book 
// (iv)	To display book information

#include <iostream>
using namespace std;

//creating a class named book
class book
{
  char book_name[100]; //string for name
  int book_number; 
  float price;
  char author[100];
  char publisher[100];
  int tot_cop,left_cop; //total copis and left copies.

public:
	book()
	{
	char book_name[100]={"C++_Programming"}; //string for name
	 int book_number=1; 
	 float price=100.25;
	 char author[100]={"VENKAT"};
	 char publisher[100]={"ARYAN_PUBLICATIONS"};
	 int tot_cop=3,left_cop=2; //total copis and left copies.
	}

	void display()
		{
			cout<<"Here are the details:\n";
			cout<<"NAME: "<<book_name<<"\nBOOK NUMBER: "<<book_number<<"\nPRICE: "<<price<<"\nPUBLISHER: "<<publisher<<"\n";
		}

	void availability()
	{
	cout<<"The available copies are: "<<left_cop;
	}




};

int main()
{
    book b1;

	b1.display();
	b1.availability();


    return 0;
}

