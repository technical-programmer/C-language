#include <stdio.h>
void odd(int arr[], int n,int cnt)
{
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d \n", arr[i]);
            cnt++;
        }
    }
    printf("the cnt is:\n");
    printf("%d\n",cnt);
}

int main()
{

    int n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int cnt=0;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("the odd no are :\n");
    odd(arr,n,cnt);
}