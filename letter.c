#include <stdio.h>
int main(){ 
    char letter;
    printf("Enter the letter :");
    scanf("%c",&letter);
    if(letter>='A' && letter<='Z'){
        printf("capital");
    }
    else if(letter>='a' && letter<='z'){
        printf("small");
    }
    else if(letter>=0 && letter<=9){
        printf("digit");
    }
    else{
        printf("special character");
    }
    return 0;
}