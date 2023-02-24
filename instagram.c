#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
    int a,b;
    scanf("%d",&a);
     scanf("%d",&b);
    if(a>b*10){
        printf(" yes\n");
    }
    else{
        printf(" No\n");
    }
    }
	return 0;
}