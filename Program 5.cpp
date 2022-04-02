#include<iostream>
using namespace std;
main()
{
  int sub1;
  int sub2;
  int sub3;
  int sub4;
  int sub5;
  
  string std_name;
  
  float percent;

  cout<<"Enter 1st subject numbers: ";
  cin>>sub1;
  cout<<"Enter 2nd subject numbers: ";
  cin>>sub2;
  cout<<"Enter 3rd subject numbers: ";
  cin>>sub3;
  cout<<"Enter 4th subject numbers: ";
  cin>>sub4;
  cout<<"Enter 5th subject numbers: ";
  cin>>sub5;
  cout<<"Enter Student name: ";
  cin>>std_name;
  cout<<"The name of the student is: ";
  cout<<std_name;
  cout<<endl;
  
  percent=((sub1+sub2+sub3+sub4+sub5)*100)/500;
  cout<<"The percentage of obtained marks: ";
  cout<<percent;
  

 
}