#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//The strcat() function is defined in the string.h header file.

int main(){

  char str1[] = "Welcome to";
  char str2[] = " C programming";

  int result;

  // concatenates str1 and str2
  // the resultant string is stored in str1.

  strcat(str1,str2);

  printf("%s\n",str1);

  //otput : Welcome to C programming

  printf("%s\n",str2);

  // output : C programming


   // using puts function

   puts(str1); // used to get the output
   puts(str2);



return 0;
}

