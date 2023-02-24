#include <stdio.h>
void occur(int arr[],int n,int cnt,int x){
     for(int i=0;i<n;i++){
        if(arr[i]==x){
            cnt++;
        }
    }
        printf("%d",cnt);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     int x;
     printf("Enter the no to be searched :");
    scanf("%d",&x);
    int cnt=0;
    occur(arr,n,cnt,x);
}