#include <stdio.h>

int main() {
	int n;
    printf("Enter the value of n:");
	scanf("%d",&n);
	while(n--){
	    int A,B,C;
        printf("Enter A side :");
	    scanf("%d",&A);
        printf("Enter B side :");
	    scanf("%d",&B);
        printf("Enter C side :");
	    scanf("%d",&C);
	    if(A+B+C==180){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	    
	}
	return 0;
}