#include <stdio.h>

int main(void) {
    int n;
    printf("Enter the input:");
    scanf("%d",&n);
    while(n--){
	int x,y,a;
	scanf("%d %d %d",&x,&y,&a);
	if(a>=x && a<y){
	    printf("YES\n");
	}
	else{
	    printf("NO\n");
	}
    }
	return 0;
}

