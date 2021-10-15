/*
This program check if the user Input(integer) number is a Fisher number or not.Also Print the Fisher Number Upto Given input number.

A Fisher number is an integer whose multipliers are equal to the number's cube. For example, 12 is a Fisher number, because 12^3 = 2 x 3 x 4 x 6 x 12.

For example:
Input: 12
Output: true (12^3 = 2 x 3 x 4 x 6 x 12)

Input: 8
Output: false (8^3 != 2 x 4 x 8)


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
    cout<<" * ";
  }
}

int Multiple_Factor(int num)
{
  int fm=1;
  for(int i=1;i<=num;i++){
    if(num%i==0)
      fm=fm*i;
   }
  return fm;
}

int Fisher_Check(int num)
{
 int cube=pow(num,3);
  if(cube==Multiple_Factor(num))
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

 if(Fisher_Check(num)){
  cout<<"👍 "<<num<<" is a 🐟 Fisher Number.";
  cout<<"\n\n-> "<<num<<"^3 = "<<(int)pow(num,3)<<"\n-> ";
  Print_Factor(num);
  cout<<" = "<<Multiple_Factor(num);
 }
 else{
  cout<<"❌ "<<num<<" is Not a Fisher Number.";
  cout<<"\n\n-> "<<num<<"^3 = "<<(int)pow(num,3)<<"\n-> ";
  Print_Factor(num);
  cout<<" = "<<Multiple_Factor(num);
 }

 cout<<"\n\n\nFisher Numbers Upto "<<num<<" Are :"<<endl<<endl;
 for(int i=1;i<=num;i++)
  if(Fisher_Check(i))
   cout<<i<<", ";

 return 0;
}
