
#include<stdio.h>

void main(){
    double x;
    printf("input x:");
    scanf("%lf",&x);
    double y;
    if(x<0){
        y=-x;
    }else{
        y=x;
    }
    printf("|x|=%lf",y);
}
