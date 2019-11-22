#include<stdio.h>

void main(){
    int index_day;

    scanf("%d",&index_day);

    switch(index_day){
    case 1:
        printf("monday");
        index_day=4;
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("wednesday");
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("wrong input");
    }
}
