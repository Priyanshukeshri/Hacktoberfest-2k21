/*
This program check if the user Input(integer) number is a Deficient Number or Not.Also Print the Deficient Number Upto Given input number.

A Number is considered Deficient if the Sum of its factors is less than twice that number.


For example:
10 is an Deficient number.

-> Sum of Factors of 10 is:
   1 + 2 + 5 + 10 = 18

-> Twice of 12 is :
   10 * 2 = 20

-> Sum of Factor of 10 is Less than Twice of 10.
*/
#include <iostream>
#include <cmath>
using namespace std;
void Print_Factor(int num)
{
 for(int i=1;i<=num;i++)
  if(num%i==0){
   cout<<i;
    if(i!=num)
    cout<<" + ";
  }
}

int Addition_Factor(int num)
{
  int fm=0;
  for(int i=1;i<=num;i++){
    if(num%i==0)
      fm=fm+i;
   }
  return fm;
}

int Deficient_Check(int num)
{
  if(Addition_Factor(num) < num*2)
    return 1;
   else
    return 0;
}

int main()
{
 int num;
// cout<<"Enter a Number : ";
 cin>>num;
 cout<<"Entered Number : "<<num<<endl<<endl;

 if(Deficient_Check(num)){
  cout<<"👍 "<<num<<" is an Deficient Number.";
  cout<<"\n\n-> "<<"Sum of Factors of "<<num<<" is :\n\t\t";
  Print_Factor(num);
  cout<<" = "<<Addition_Factor(num)<<"\n\t\t";
  cout<<"\n-> "<<"Twice of "<<num<<" is :\n\t\t";
  cout<<num<<" * "<<2<<" = "<<num*2;
  cout<<"\n\n-> Sum of Factors of "<<num<<" is Less than Twice of "<<num<<".";
 }
 else{
  cout<<"❌ "<<num<<" is Not a Deficient Number.";
  cout<<"\n\n-> "<<"Sum of Factors of "<<num<<" is :\n\t\t";
  Print_Factor(num);
  cout<<" = "<<Addition_Factor(num)<<"\n\t\t";
  cout<<"\n-> "<<"Twice of "<<num<<" is :\n\t\t";
  cout<<num<<" * "<<2<<" = "<<num*2;
  cout<<"\n\n-> Sum of Factors of "<<num<<" is Greater than Twice of "<<num<<".";
 }

 cout<<"\n\n\nDeficient Numbers Upto "<<num<<" Are :"<<endl<<endl;
 for(int i=1;i<=num;i++)
  if(Deficient_Check(i))
   cout<<i<<", ";

 return 0;
}
