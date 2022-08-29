// A C++ Program using Simple Constructor Function

#include<iostream.h>
#include<conio.h>

class Student
{
private:  
      int Roll_No;
	float Percentage;
public:
       Student()
       {
          Roll_No = 1;
	    Percentage = 90.44;
       }
      void displaydata()
       {
		cout<<"\n Roll No.:" << Roll_No;
		cout<<"\n Percentage:" << Percentage;
       }
 };


void main()
{
	clrscr();
	Student S;

	S.displaydata();
	getch();
}
