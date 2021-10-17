#include<stdio.h>
int main()
{
    int i,j;
    long long int n,d;
    scanf("%lld%lld",&n,&d);
    long long int ar[n],temp;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&ar[i]);
    }
    int ar2[n];
    for(i=0;i<n;i++)
    {
      ar2[(i+n-d)%n]=ar[i];   
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",ar2[i]);
    }
       
   return 0;
}
