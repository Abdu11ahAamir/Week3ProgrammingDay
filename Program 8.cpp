#include<iostream>
using namespace std;
main()
{
 string movie;
 int Aprice;
 int Cprice;
 int AticketSold;
 int CticketSold;
 int TotalAprice;
 int TotalCprice;
 int Total;
 float Cpercent;
 float profit;

 cout<<"Enter Movie name is: ";
 cin>>movie;
 cout<<"Enter Adult Ticket Prize: ";
 cin>>Aprice;
 cout<<"Enter Child Ticket Prize: ";
 cin>>Cprice;
 cout<<"Number of adult tickets sold: ";
 cin>>AticketSold;
 cout<<"Number of child tickets sold: ";
 cin>>CticketSold;
 cout<<"Percentage of the amount to be donated to the charity: ";
 cin>>Cpercent;
 TotalAprice=Aprice*AticketSold;
 TotalCprice=Cprice*CticketSold; 
 Total=TotalAprice+TotalCprice;
 cout<<"Total amount Generated: ";
 cout<<Total;
 cout<<endl;
 profit=(Total*Cpercent)/100;
 cout<<"Profit Amount after Donating: ";
 cout<<profit;
 
 

}