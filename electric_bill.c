#include<stdio.h>

int main() {
 int ini;
 int fin;
 int bill=0;
  printf("\nEnter a initial and final reading:");
  scanf("%d", & ini);
  scanf("%d", &fin);
  int r= fin-ini;
  if ( r>=500) {
      bill= r*5.50;
    printf("\n Total bill is:%d \n", bill);
  } else if (r>200 && r<500) {
      bill=r*3.50;
    printf("\n Total bill is:%d \n" ,bill);
  } else if(r>100 && r<200){
      bill=r*2.50;
     printf("\n Total bill is:%d \n" ,bill);
     
  } else{
      bill= r*1.50;
       printf("\n Total bill is:%d \n" ,bill);
  }
  return 0;
}