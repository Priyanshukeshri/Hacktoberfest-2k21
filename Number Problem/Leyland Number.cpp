/*
This Program Check weather the Input(integer number) is Leyland or Not. Also Print Leyland numbers upto given input number.

A Leyland number is a number which can be expressed as a^b + b^a where a and b are integers greater than 1.

The first few Leyland numbers are:
8,17,32,54,57,100,145,177,320,368,512,593,945,1124

For Example:

17= 2^3 + 3^2

8= 2^2 +2^2

*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int Leyland_Check(int num)
{
 int i,j,ans,brk=0,flag=0;
 for(i=2;i<sqrt(num);i++)
 {
  for(j=2;j<i+1;j++)
  {
   ans=pow(i,j)+pow(j,i);
   if(ans==num){
    cout<<setw(6)<<num<<" = "<<i<<"^"<<j<<" + "<<j<<"^"<<i<<endl;
    flag=1;
    brk=1;
    break;
   }
  }
  if(brk) break;
 }
 if(flag)
  return 1;
 return 0;
}

int main()
{
 int num;
// cout<<"Enter a Number : ";
 cin>>num;
 cout<<"Entered Number : "<<num<<endl<<endl;

 if(Leyland_Check(num))
  cout<<"👍 "<<num<<" is a Leyland Number.";
 else
  cout<<"❌ "<<num<<" is Not a Leyland Number.";

 cout<<"\n\nLeyland Numbers Upto "<<num<<" Are :"<<endl<<endl;
 for(int i=1;i<=num;i++)
   Leyland_Check(i);

 return 0;
}
