#include<iostream>
using namespace std;
main()
{
 float bagSize;
 float bagCost;
 float Area;
 float costperpound;
 float costperarea;
 cout<<"Enter the size of Fertilizer bag in pounds: ";
 cin>>bagSize;
 cout<<"Enter the cost of the bag: ";
 cin>>bagCost;
 cout<<"Enter the area in square feet covered by the bag: ";
 cin>>Area;
 costperpound=bagCost/bagSize;
 cout<<"Cost per pound of Fertilizers: ";
 cout<<costperpound;
 cout<<endl;
 costperarea=bagCost/Area;
 cout<<"cost per sqaurefeet of area covered: ";
 cout<<costperarea;

 cout<<endl;
 
}