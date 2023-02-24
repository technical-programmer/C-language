#include <stdio.h>
int main(){
    int a;
    printf("Enter the value a :");
    scanf("%d",&a);
    if(a<18){
        printf(" considered as minor \n");
        printf("not fit for working");

    }
    else if(a>=18 && a<=50){
        printf("He/She is successfully eligible for Working \n");
        printf("Fill all the details and apply for it\n");
    }
    else {
        printf("Age is not satisfactory according to the organization norms\n");
        printf("Ready for retirement and can collect pension \n");
    }

}
