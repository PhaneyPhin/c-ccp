#include<stdio.h>

void main(){
    int n;

    scanf("%d",&n);

    if(n<=1){
        printf("n is not prime number");
    }else{
        int i;
        int count=0;
        for(i=2;i<=n-1;i=i+1){
            if(n%i==0){
                count=count+1;
                printf("i=%d\n",i);
            }
        }
        if(count==0){
            printf("n is prime number");

        }else{
            printf("n is not prime number");
        }

    }

}
