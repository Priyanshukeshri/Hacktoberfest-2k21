#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[30];
	int i,flag=2;
	cout<<"enter a  string"<<endl;
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]<48||a[i]>57)
		{
			flag=1;
		}
	}
	if(flag!=1)
	  cout<<"only digits";
	  else
	  cout<<"not all digits";
	  return 0;
}
