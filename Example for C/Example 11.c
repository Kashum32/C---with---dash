#include<stdio.h>
int factorial(int n)
{
    if(n==1){
        return 1;
    }
    else
    {
        return (n*factorial(n-1));
    }
}
int main(){

  int n;

  printf("Enter user  number : ");
  scanf("%d",&n);

  printf("\nThis is a  number : %d\n",n);



 int f = factorial(n);
   printf("\nThis is a factorial number : %d\n",f);




return 0;
}
