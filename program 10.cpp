#include<iostream>
using namespace std;
main()
{
 int num;
 int num1;
 int num2;
 int num3;
 int num4;
 int sum;

 cout<<"Enter a four digit number: ";
 cin>>num;
 num1=(num%10)/1;
 num2=(num%100)/10;
 num3=(num%1000)/100;
 num4=(num%100000)/1000;
 cout<<num1; 
 cout<<num2; 
 cout<<num3; 
 cout<<num4; 

}