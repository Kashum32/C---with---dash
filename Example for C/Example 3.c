#include <stdio.h>
#include <stdlib.h>


void add(){

    int A,B;
    float sum;
    printf("\n Addition of Arithmetic Operator\n");

    printf("\n Enter first number : ");
    scanf("%d",&A);

    printf("\n Enter second number : ");
    scanf("%d",&B);

    sum = A + B;

    printf("\n Total = %.2f",sum);

}
void sub(){

    int A,B;
    float sum;
    printf("\n Subtraction of Arithmetic Operator\n");

    printf("\n Enter first number : ");
    scanf("%d",&A);

    printf("\n Enter second number : ");
    scanf("%d",&B);

    sum = A - B;

    printf("\n Total = %.2f",sum);

}
void mul(){

    int A,B;
    float sum;
    printf("\n Multiplication of Arithmetic Operator\n");

    printf("\n Enter first number : ");
    scanf("%d",&A);

    printf("\n Enter second number : ");
    scanf("%d",&B);

    sum = A * B;

    printf("\n Total = %.2f",sum);

}
void divi(){

    int A,B;
    float sum;
    printf("\n Division of Arithmetic Operator\n");

    printf("\n Enter first number : ");
    scanf("%d",&A);

    printf("\n Enter second number : ");
    scanf("%d",&B);

    sum = A/B;

    printf("\n Total = %.2f",sum);

}
void mod(){

    int A,B;
    float sum;
    printf("\n Modulation of Arithmetic Operator\n");

    printf("\n Enter first number : ");
    scanf("%d",&A);

    printf("\n Enter second number : ");
    scanf("%d",&B);

    sum = A % B;

    printf("\n Total = %.2f",sum);

}

int main(){

while(1){  /*Infinite while loop*/

   int select;
   printf("\nchoose your select number : ");
   scanf("%d",&select);

    switch(select){ // switch statement

       case 1 :
           add();
           break;
       case 2 :
           sub();
           break;
       case 3 :
           mul();
           break;
       case 4 :
           divi();
           break;
       case 5 :
            mod();
            break;

       default :
           exit(1);
           break;


        }

}

return 0;
}