#include<stdio.h>

void main(){
    int score[3];

    score[0]=50;
    score[1]=60;
    score[2]=70;
    int i;

    int sum=0;
    for(i=0;i<3;i++){
        sum=sum+score[i];
        printf("student%d got score %d\n",i+1,score[i]);
    }

    printf("sum score=%d\n",sum);
    printf("average=%d\n",sum/3);
}
