
#include <stdio.h>
#include <stdlib.h>

typedef struct{

 int stNo;
 char sName[25];
 char depName[25];
 int joinYear;

}student;

void input(student * s){

  printf("\n Enter Student Number : ");
  scanf("%d",&s->stNo);

  printf("\n Enter Student Name : ");
  scanf("%s",&s->sName);

  printf("\n Enter Department : ");
  scanf("%s",&s->depName);

  printf("\n Enter Year : ");
  scanf("%d",&s->joinYear);


}

void findYear(student students[],int size){

   int y,i,has = 0 ;

   printf("\n Enter Year : ");
   scanf("%d",&y);

   printf("\n These are the students who joined the given year ");
   for(i=0; i<size; i++){

    if(students[i].joinYear == y){
        printf("\n %s ",students[i].sName);
        if(has == 0)
            has = 1;
            break;

      }
    if(!has )
    printf("\n There are no students joined in the given year");

   }

}


void findSNo(student students[],int size){

  int i, has = 0, Num;

  printf("\n Enter student number to find : ");
  scanf("%d",&Num);
  for(i=0; i<size; i++){
    if(students[i].stNo == Num){
        printf("\n Details of the students are : ");
        printf("%d %s %s %d \n",students[i].stNo,students[i].sName,students[i].depName,students[i].joinYear);

        has = 1;
        break;

    }
    if(!has)
        printf("\n No student record found");

  }

}

int main(){

  student students[10];
  int i,choice,size;

  printf("\n\t STUDENT MANAGEMENT SYSTEM \n");
  printf("\n Enter student details as requested");
  printf("\n How many students do you want to enter :");
  scanf("%d",&size);
  for(i=1; i<=size;i++){
    printf("\n Details by student [%d] : \n",i);
    input(&students[i]);
  }

  while(1){
    printf("\n Give your choice as ");
    printf("\n 1 - To find students joined a specific year");
    printf("\n 2 - To find a students given the student number ");
    printf("\n 3 - To exit ");

    printf("\n\n Enter your choice : ");
    scanf("%d",&choice);

  switch(choice){

  case 1 :
      findYear(students,size);
      break;
  case 2 :
      findSNo(students,size);
      break;
  default :
      break;
    }


   if(choice==3){
     break;
   }

  }




return 0;
}
