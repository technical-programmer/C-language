#include <stdio.h>
int  sum(int a,int b){
    return a+b;
}


void printTable(int n){
    for(int i=1;i<=10;i++){
     printf("%d * %d = %d\n", n,i,n*i);   
    }
}

int main(){
    int x,y;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the value of y:");
    scanf("%d",&y);
     int n = sum(x,y);
     printf("the sum  is \n",n);
     printf("%d\n",n);
     printf("the table of %d is \n",n);
     printTable(n);
}