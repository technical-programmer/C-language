// print below pattern  on console 
/* 1
1 2
1 2 3
1 2 3 4 
1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1 */
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    for(int i=n;i>1)
}