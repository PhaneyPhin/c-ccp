#include<stdio.h>

void main(){

    int n,i;
    printf("input number of students in class:");
    scanf("%d",&n);


    int score[n];
    printf("input %d  numbers:",n);
    for(i=0;i<n;i++){
        scanf("%d",&score[i]);
    }


    int sum=0;
    for(i=0;i<n;i++){
        sum=sum+score[i];
        printf("student%d got score %d\n",i+1,score[i]);
    }

    printf("sum score=%d\n",sum);
    printf("average=%d\n",sum/n);
}
