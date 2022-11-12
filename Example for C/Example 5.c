#include <stdio.h>
#include <stdlib.h>

// Another example program to demonstrate working
// of enum in C

enum year{Jan, Feb, Mar, Apr, May, Jun, July, Aug, Sep, Oct, Nov ,Dec};

int main(){

   int i;
   for(i = 1; i <= Dec; i++){

       printf("%d \n",i);
   }

return 0;
}