
#include<stdio.h>
#include<conio.h>
int main(){
    int x,y;

    scanf("%d%d",&x,&y);

    int sum=x+y;
    int diff=y-x;
    float div=y/((float)x);
    int part=y%x;
    printf("C print:\n");
    printf("sum=%d\n",sum);
    printf("diff=%d\n",diff);
    printf("div=%f\n",div);
    printf("part=%d\n",part);

 /*   printf("\nchar:\n");
    char c;//A,B,C

    printf("c=%c\n",c);

    */

    float x1,y1;

    scanf("%f%f",&x1,&y1);

    printf("x1=%f,y1=%f",x1,y1);


    return 0;
}
//x1=5,y1=4
