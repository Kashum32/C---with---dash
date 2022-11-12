#include<stdio.h>

void reverse(int n)
{
    printf("%d",n%10);
    
    if(n/10 != 0){

        reverse(n/10);
     
    }
}

int main(){

reverse(327);

return 0;
}

// output : 723
