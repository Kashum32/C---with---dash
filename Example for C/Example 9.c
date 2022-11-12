#include <stdio.h>
#include <string.h>

// gets and puts function

int main(){

char name[20];
char address[30];
int city_no;

printf("Enter Name : ");
gets(name);

printf("Enter Address : ");
gets(address);

printf("\nDisplay Name : ");
puts(name);

printf("\nDisplay Address : ");
puts(address);

printf("\nEnter city_no : ");
scanf("%d",&city_no);

printf("\nDisplay city_no : %d\n",city_no);


return 0;
}
