#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>
//using namespace std;
int main()
{
clrscr();
int d,d1,d2,m,m1,m2,y,y1,y2;
char name[15];
cout<<"Welcome to ABC calculator for calculate the DOB";
cout<<"\nEnter name of student\n";
gets(name);
cout<<"Enter Date of birth in the format of DD MM YYYY\n";
cin>>d1>>m1>>y1;
cout<<"Enter present Date in the format of DD MM YYYY\n";
cin>>d2>>m2>>y2;
clrscr();
if(d1<=31 && d2<=31 && m1<=12 && m2<=12 && y1<=y2)
{
  if(d2>=d1)
   {
     d=d2-d1;
   }
      else
       {
	d2=d2+30;
	m2=m2-1;
	d=d2-d1;
       }

	if(m2>=m1)
	 {
	  m=m2-m1;
	 }
	   else
	    {
	      m2=m2+12;
	      y2=y2-1;
	      m=m2-m1;
	    }

	    if(y2>=y1)
	     {
	      y=y2-y1;
	     }
	 else
	  {
	   cout<<"Age cannot be negative";
	  }

 cout<<"\t\t\t -----------------------------";
 cout<<"\n\t\t\t| -----ABC CALCULATOR------   |\n";
 cout<<"\t\t\t|                             |\n";
 cout<<"\t\t\t Name="<<name<<"                   \n";
 cout<<"\t\t\t| DOB="<<d1<<"/"<<m1<<"/"<<y1<<"               |\n";
 cout<<"\t\t\t| Age="<<y<<" year "<<m<<" month "<<d<<" day"<<"   |\n";
 cout<<"\t\t\t|                             |\n";
 cout<<"\t\t\t|                             |\n";
 cout<<"\t\t\t|                             |\n";
 cout<<"\t\t\t -----------------------------";

}
else
 {
 cout<<"Any entered data is wrong";
 cout<<"\nSo enter correct data date>=31 and month>=12 and Birthyear>=Presentyear";
 }
getch();
return 0;
}