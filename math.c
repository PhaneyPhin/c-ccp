
#include<stdio.h>
#include<math.h>


void main(){
    int i,n;
    scanf("%d",&n);

    float sum=0;
    float e=2.7182;
    for(i=1;i<=n;i=i+1){
        sum=sum+(1+pow(e,i))/pow(e,i);
    }
    printf("%f",sum);
}
