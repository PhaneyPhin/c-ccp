#include<stdio.h>

void main(){
   int number;
   printf("input the number") ;
   scanf("%d",&number);
   int price;

   if(number<10){
        price=700*number;
   }

   if(number>=10&&number<20){
        price=800*number;
   }
   if(number>=20&&number<30){
        price=900*number;
   }

   if(number>=30){
    price=950*number;
   }

   /*if(number <10){
        price=700*number;

   }else{
        if(number<20)  {
            price=800*number;

        } else{
            if(number<30){
                price=900*number;
            }else{
                price=950*number;
            }

        }
   }*/

   printf("price=%d",price);
   /* int number;

    printf("input the number:");
    scanf("%d",&number);

    if(number%2==0){
        printf("the number is even number");
    }else{
        printf("the number is odd number");
    }
    */
   /* int x;

    printf("input x:");
    scanf("%d",&x);

    if(x==1){
        printf("Cycle");
    }else{
        if(x==2){
            printf("reactagle");
        }else{
            printf("nothing");
        }
    }
    */
}
