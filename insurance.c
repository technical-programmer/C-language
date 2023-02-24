#include <stdio.h>

int main(void) {
int n;
scanf("%d",&n);
while(n--){
    int x;
    scanf("%d",&x);
    int y;
    scanf("%d",&y);
    if(y<=x){
        printf("%d",y);
    }
    else{
        printf("%d",x);
    }
}
	return 0;
}

