#include<stdio.h>

void input(int *num1,int *num2){

  printf("enter one : ");
  scanf("%d",num1);

  printf("enter two : ");
  scanf("%d",num2);

}

void avg(int *num1, int *num2){

  float avg;

  avg = (*num1 + *num2)/2.0;
  printf("avg = %.2f",avg);

}

int sum(int num1,int num2){

  int sum2 = num1 + num2;
  return sum2;

}

void output(int x ){
  printf("sum = %d \n",x);

}

int main(){

int num1,num2;
int avg1,sum1;

input(&num1,&num2);

avg(&num1,&num2);

sum1 = sum(num1,num2);

output(sum1);



return 0;
}
