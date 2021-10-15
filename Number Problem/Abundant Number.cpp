/*
This program check if the user Input(integer) number is a Abundant number or not.Also Print the Abundant Number Upto Given input number.

If the sum of factors of a number is greater than twice that number, it is considered to be Abundant Number.

For example:
12 is an Abundant number.

-> Sum of Factors of 12 is:
1 + 2 + 3 + 4 + 6 + 12 = 28

-> Twice of 12 is :
12 * 2 = 24

-> Sum of Factor of 12 is Greater than Twice of 12.


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

int Abundant_Check(int num)
{
  if(Addition_Factor(num) > num*2)
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

 if(Abundant_Check(num)){
  cout<<"👍 "<<num<<" is an Abundant Number.";
  cout<<"\n\n-> "<<"Sum of Factors of "<<num<<" is :\n\t\t";
  Print_Factor(num);
  cout<<" = "<<Addition_Factor(num)<<"\n\t\t";
  cout<<"\n-> "<<"Twice of "<<num<<" is :\n\t\t";
  cout<<num<<" * "<<2<<" = "<<num*2;
  cout<<"\n\n-> Sum of Factors of "<<num<<" is Greater than Twice of "<<num<<".";
 }
 else{
  cout<<"❌ "<<num<<" is Not a Abundant Number.";
  cout<<"\n\n-> "<<"Sum of Factors of "<<num<<" is :\n\t\t";
  Print_Factor(num);
  cout<<" = "<<Addition_Factor(num)<<"\n\t\t";
  cout<<"\n-> "<<"Twice of "<<num<<" is :\n\t\t";
  cout<<num<<" * "<<2<<" = "<<num*2;
  cout<<"\n\n-> Sum of Factors of "<<num<<" is Less than Twice of "<<num<<".";
 }

 cout<<"\n\n\nAbundant Numbers Upto "<<num<<" Are :"<<endl<<endl;
 for(int i=1;i<=num;i++)
  if(Abundant_Check(i))
   cout<<i<<", ";

 return 0;
}
