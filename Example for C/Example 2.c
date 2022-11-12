#include <stdio.h>
#include <stdlib.h>

int main(){

while(1){  /*Infinite while loop*/

   int select;
   printf("\nchoose your select number : ");
   scanf("%d",&select);

    switch(select){ // switch statement

       case 2 :
           printf("\n welcome to c programing");
           break;
       case 3 :
           printf("\n good morning");
           break;
       case 4 :
           printf("\n good evening");
           break;
       case 5 :
           printf("\n good afternoon");
           break;
       default :
           printf("\n not found");
           break;


        }

}

return 0;
}
