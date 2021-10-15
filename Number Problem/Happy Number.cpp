/*
This Program Check Weather the input(integer) number is Happy or Not.Also Print Happy Numbers Upto Input number.

If the repeated sum of squares of the digits of a number is equal to 1, it is considered to be Happy.

For Example:
23 is a happy number, as:
2 ^ 2 + 3 ^ 2 = 13
1 ^ 2 + 3 ^ 2 = 10
1 ^ 2 + 0 ^ 2 = 1

Sequence of happy numbers: 1, 7, 10, 13, 19, 23, ...

*/
#include <iostream>
#include <iomanip>
using namespace std;
void Check_Happy_Number(int num)
{
 int sum=1,n,r;
 n=num;
 while(n!=1 || n!=4)
 {
  sum=0;
   while(n!=0){
    r=n%10;
    sum=sum+r*r;
    n=n/10;
   }
   if(sum==1 || sum==4)
     break;
   n=sum;
 }
  if(sum==1)
    cout<<"👍 "<<num<<" is a 😃Happy Number.\n\n";
  else
    cout<<"❌ "<<num<<" is a ☹️UnHappy Number.\n\n";
}
void Print_Happy_Number(int upto)
{
  int i,sum=1,n;
  cout<<"😃Happy Numbers Upto "<<upto<<" Are:"<<endl<<endl;
  for(i=1;i<=upto;i++)
  {
   n=i;
    while(n!=1 || n!=4)
    {
      sum=0;
       while(n!=0){
        sum=sum+(n%10)*(n%10);
        n=n/10;
       }
      if(sum==1 || sum==4)
        break;
       n=sum;
     }
   if(sum==1)
    cout<<setw(4)<<i;
  }
}
int main()
{
 int num;
//cout<<"Enter a Number : ";
  cin>>num;
 cout<<"Entered Number : "<<num<<endl<<endl;
 Check_Happy_Number(num);
 Print_Happy_Number(num);
  return 0;
}
