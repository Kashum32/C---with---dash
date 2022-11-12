
#include<stdio.h>

void luckyNumber(int a){

  printf("This is a lucky Number : %d",a);

}
void otherNumber(int b){

  printf("This is a lucky Number : %d",b);

}

int main(){

int a,b;

printf("Enter one value : ");
scanf("%d",&a);

printf("Enter two value : ");
scanf("%d",&b);

if(b<a){

    luckyNumber(a);
}
else
{
    otherNumber(b);
}



return 0;
}