
#include <stdio.h>

int main(void) {
int n;
scanf("%d",&n);
while(n--){
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int c;
    scanf("%d",&c);
    if(b*c>=a){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    
}
	return 0;
}

