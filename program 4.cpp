#include<iostream>
using namespace std;
main()
{ 
  int Fvelocity;
  int Ivelocity;
  int Time;
  int Acceleration;
  cout<<"Enter the Acceleration: ";
  cin>>Acceleration;
  cout<<"Enter the Intial Velocity: ";
  cin>>Ivelocity;
  cout<<"Enter the Time: ";
  cin>>Time;
  Fvelocity=Acceleration*Time+Ivelocity;
  cout<<" The Final Velocity is: ";
  cout<<Fvelocity;

}