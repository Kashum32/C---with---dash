#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//The strlen() function is defined in the string.h header file.

int main(){

  char str1[50] = "Welcome to programming language";
  char str2[30] = " C programming";

  // using the %zu format specifier to print size_t

  printf("Length of String str1 = %zu \n",strlen(str1));
  printf("Length of String str1 = %d \n",strlen(str1));


  printf("Length of String str2 = %zu \n",strlen(str2));
  printf("Length of String str2 = %d \n",strlen(str2));


return 0;
}
