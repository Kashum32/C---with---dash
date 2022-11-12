#include <stdio.h>
#include <stdlib.h>

// Another example program to demonstrate working
// of enum in C

enum State{Working = 1, Failed = 0, Freezed = 0};

int main(){

   printf("%d, %d, %d",Working,Failed,Freezed);

return 0;
}
