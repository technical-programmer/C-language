/*#include <stdio.h>
void reverse(int*ptr,int n){
    for (int i = n; i >=1; i--)
    {
        printf("%d", *(ptr+i));
    }
}
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    int *ptr= &arr[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d", (ptr+i));
    }
    reverse(arr,n);
}*/
#include <stdio.h>
void reverse(int arr[],int n){
    for (int i = n; i >=0; i--)
    {
        printf("%d", arr[i]);
    }
}
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d", arr[i]);
    }
    reverse(arr,n);
}
