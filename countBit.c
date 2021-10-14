#include<stdio.h>



int main(){
    
    int n=5;
    int res=0;
    while(n>0){
        
        if((n&1)==1){
            res++;
        }
        n=n>>1;
    }
    printf("%d", res);
    return 0;
}
