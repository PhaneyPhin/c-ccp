#include<stdio.h>

int main(){
    int i;
    int sum=0;
    for(i=1;i<=100;i=i+1){
        sum=sum+i;
    }
    printf("sum=%d",sum);
    return 1;
}
