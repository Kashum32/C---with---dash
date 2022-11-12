
#include<stdio.h>

void  inputNums(int *a,int *b){

  printf("Enter one value : ");
  scanf("%d",a);

  printf("Enter second value : ");
  scanf("%d",b);

  printf("\ndisplay values : %d , %d \n",*a,*b);

}
float average(int a,int b){

  float average;

  average = (a+b)/2.0;

  return average;

}
void outputAvg(float avg){

  printf("\n\nDisplay Average : %.2f",avg);

}
int main(){

 int a,b;
 float avg;

 inputNums(&a,&b);
 avg = average(a,b);
 outputAvg(avg);



return 0;
}
