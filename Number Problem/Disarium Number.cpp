/*
This program check Weather the user input is a Disarium Number or Not.Also Print Disarium Numbers Upto User Input Number.

A number is called a Disarium number if the sum of the powers of its digits equals the number itself. The digits are powered to their positions in the number.

For example:
Input: 135
Output: true
135 is a Disarium number because it equals to 1^1 + 3^2 + 5^3 (each digit powered to the position in the number).

Disarium Numbers Upto 1000 are 1,2,3,4,5,6,7,8,9,89,135,175,518,598.
*/
#include <iostream>
#include <cmath>
using namespace std;

int Disarium_Check(int num)
{
  int i,n,digits,sum;

  n=num; digits=0;
   while(n!=0){
     digits++;
     n=n/10;
   }
   sum=0; n=num;
   for(i=digits;i>0;i--){
     sum=sum+pow((n%10),i);
     n=n/10;
   }
  if(num==sum)
   return 1;
 return 0;
}

int main()
{
 int num;
//cout<<"Enter a Number: ";
 cin>>num;
 cout<<"Entered Number :"<<num<<endl<<endl;

  if(Disarium_Check(num))
    cout<<"👍 "<<num<<" is a Disarium Number.\n\n";
  else
    cout<<"❌ "<<num<<" is Not a Disarium Number.\n\n";

 cout<<"\nDisarium Numbers Upto "<<num<<" Are :"<<endl<<endl;
 for(int i=0;i<=num;i++)
  if(Disarium_Check(i))
   cout<<i<<" ";
 return 0;
}
