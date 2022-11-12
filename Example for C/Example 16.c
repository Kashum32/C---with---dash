
#include<stdio.h>

int main(){

char *name[3] = {"kalana","mahesh","jeewantha"};

for(int i =0; i<3; i++){

    printf("%s\n",name[i]);
}

printf("%s",name[2]);



return 0;
}