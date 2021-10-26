#include<iostream>
using namespace std;

int main(){
    int a[5]= {8,5,10,2,22};
    int i,j,n=5,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
                if(a[j]>a[j+1]){
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;   
                }
        }
    }
 
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}

