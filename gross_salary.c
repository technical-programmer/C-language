#include <stdio.h>
int main(){
    float basic, gross,hra,da;
    printf("Enter the basic salary : ");
    scanf("%f",&basic);
    if(basic<=10,000){
        hra=basic*0.8;
        da=basic*0.2;
    }
    else if(basic<=20000){
        hra=basic*0.25;
        da=basic*0.9;
    }
    else{
        hra=basic*0.3;
        da=basic*0.95;
    }
    gross =basic+hra+da;
    printf("the gross salary is %0.2f \n",gross);


}