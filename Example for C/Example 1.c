
#include <stdio.h>
#include <stdlib.h>

int main(){

  int count = 0;
  int price;
  int total = 0;

  while(1){

    printf("\nEnter price : ");
    scanf("%d",&price);

    if(price == 10){

        break;
    }
    count++;
    total+=price;

    printf("\n%d",price);

  }
 printf("\n\ntotal: %d\n",total);

return 0;
}