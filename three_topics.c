#include <stdio.h>
int main(){
    int a,b,c,D;
    printf("Enter a :");
    scanf("%d",&a);
    printf("Enter b :");
    scanf("%d",&b);
    printf("Enter c :");
    scanf("%d",&c);
    printf("Enter d :");
    scanf("%d",&D);

    if(D==a||D==b||D==c){
        printf("true");
    }
    else{
        printf("false");
    }

}