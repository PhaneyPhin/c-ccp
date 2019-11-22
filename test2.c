#include<stdio.h>
int main(){
    int score;
    scanf("%d",&score);
    if(score<50){
        printf("grade=E");
    }else if(score<60){
        printf("grade=D");
    }else if(score<70){
        printf("grade=c");
    }else if(score<80){
        printf("grade=B");

    }else{
        printf("grade=A");
    }
return 1;
}
