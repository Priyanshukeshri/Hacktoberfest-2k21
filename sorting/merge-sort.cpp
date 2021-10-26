#include<iostream>
using namespace std;

void merge(int a[],int p,int q, int mid){
    int n1=mid,i=0,k=0,j=mid+1,b[q];
    //greater then equal to sign is important
    while(i<=n1 && j<=q){     
        if(a[i]<a[j]){
            b[k]=a[i];
            i++;
            k++;
        }else{
            b[k]=a[j];
            j++;
            k++;
        }
    }
    if(i>n1){
        while(j<=q){
            b[k]=a[j];
            k++;
            j++;
        }
    }else{
        while(i<=n1){
            b[k]=a[i];
            k++;
            i++;
        }
    } 
    
    //till now all elements are in array b we have to copy them in array 1


    for(int i=0;i<=q;i++){
        a[i]=b[i];
    }

}

void MergeSort(int a[],int p,int q){
    int mid;
    // if statement is for check that if array have more then or equal to two elements or  
    // not . after reaching at the conditiion the array will start geting merge
    if(p<q){   
        mid = (p+q)/2;
        MergeSort(a,p,mid);
        MergeSort(a,mid+1,q);
        merge(a,p,q,mid);
    }

}


int main(){
    int p=1,q=8;  
    int a[q]={5,1,3,6,4,2,9,7};
    MergeSort(a,p,q);
    for(int i=0;i<q;i++){
        cout<<a[i];
    }
  
}