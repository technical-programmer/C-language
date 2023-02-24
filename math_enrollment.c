#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	while(n--){
	    int a;
	    scanf("%d",&a);
	    int b;
	    scanf("%d",&b);
	    
	    if(a<b){
	        printf("%d \n",b-a);
	    }
	    else{
	        printf("0\n");
	    }
	}
	return 0;
}

