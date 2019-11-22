#include<stdio.h>
int main(){
    float a;
    float b;
    printf("input height");
    scanf("%f",&a);
    printf("input weight");
    scanf("%f",&b);
    float bmi;
    bmi=b/(a*a);
    printf("bmi=%f",bmi);
    return 1;
}
