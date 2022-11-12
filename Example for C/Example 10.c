
#include<stdio.h>
#define PI 3.14

// Storage classes

extern int R; // External variable declare
extern float A; // External variable declare

int main(){

input();
calculate();
output();

return 0;
}

void input(){

printf("\n Enter Radius value : ");
scanf("%d",&R);

printf("\n Dispalay Radius value : %d\n",R);

}

void calculate(){

  A = PI * R * R; // calculate area

}

void output(){

printf("\nArea = %.2f",A);

}
