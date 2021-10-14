#include<iostream>
using namespace std;
class Student
{
  char *name;
  int *marks,roll;
  float per;
  public:
  Student()        //DYNAMIC CONSTRUCTOR
  {
   roll=0;
   marks=new int[5];
   name=new char[20];
  }
  void getdata()
  {
   cout<<"Enter Roll No: ";
   cin>>roll;
   cout<<"Enter Name: ";
   cin>>name;
   for(int i=0;i<5;i++)
   {
    cout<<"Enter Marks of Subject: "<<(i+1)<<" ";
    cin>>marks[i];
   }
  }
  void percentage()
  {
   int total=0;
    for(int i=0;i<5;i++)
    total+=marks[i];
    per=(float)total/5.0;
  }
  void showdata()
  {
  cout<<"ROLL NO: "<<roll<<endl;
  cout<<"NAME: "<<name<<endl;
  cout<<"PERCENTAGE: "<<per<<endl;
  }
};
int main()
{
  Student s1;
  s1.getdata();
  s1.percentage();
  s1.showdata();
  return 0;
}
