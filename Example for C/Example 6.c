#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//The strcmp() function is defined in the string.h header file.
//you will learn to compare two strings using the strcmp() function.

int main(){

  char str1[] = "abcd";
  char str2[] = "abCd";
  char str3[] = "abcd";

  int result;

  //Answer should be equal = 0 and not equal = 1
  //comparing string str1 and str2
  result = strcmp(str1,str2);
  printf("strcmp(str1, str2) = %d\n",result);

  //comparing string str1 and str2
  result = strcmp(str1,str3);
  printf("strcmp(str1, str3) = %d\n",result);


return 0;
}
