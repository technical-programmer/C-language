#include <stdio.h>

int main(void) {
int n;
scanf("%d",&n);
while(n--){
     int c;
    scanf("%d",&c);
    int m;
    scanf("%d",&m);
    int k;
    scanf("%d",&k);
    if(m-k>=c){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
	return 0;
}

