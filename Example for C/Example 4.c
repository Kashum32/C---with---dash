// Enumeration (or enum) is a user defined data type in C. It is mainly used to assign names to integral constants, 
the names make a program easy to read and maintain.

#include <stdio.h>
#include <stdlib.h>

enum Day{sun = 1 , mon = 2, tue = 3, wen = 4, thu = 5, fri = 6, sat = 7};

int main(){

  //enum = a user defined type of named integer identifiers
  //       helps to make a program more readable

  enum Day today = sun;

 // printf("%d",today); // enums are Not String, but they can be treated as int

  if(today == sun || today == sat){ // || means (or) grade

      printf("\n Its the weekend! Party time");
  }else{

      printf("\n I have to work today ");

  }


return 0;
}

 