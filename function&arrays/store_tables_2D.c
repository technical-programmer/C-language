#include <stdio.h>
int main(){
    int arr[2][3];
    for(int i=1;i<=10;i++){
        int u=2;
        u=u*i;
        printf("%d   ",u);
    }
     printf("\n");
     for(int j=1;j<=10;j++){
            int t=3;
            t=t*j;
            printf("%d   ",t);
        }
}