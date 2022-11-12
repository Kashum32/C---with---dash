#include <stdio.h>
#include <stdlib.h>

void maxnum(int num1,int num2,int *max){

     if(num1 < num2){

        *max = num1;
     }
     else
     {
         *max = num2;
     }

     printf("\nmax = %d",*max);


}

int main()
{
   int n1,n2,maxnum1;

   printf("Enter number one : ");
   scanf("%d",&n1);

   printf("Enter number one : ");
   scanf("%d",&n2);

   void maxnum(int num1,int num2,int *max);
   maxnum(n1,n2,&maxnum1);

    return 0;
}
