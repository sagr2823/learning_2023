#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the  array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Before reversing the array\n");
    for (int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
   int rev[n];
 
    for (int i=0;i<n;i++) {
        rev[n-1-i]=arr[i];
    }
 
    for(int i=0;i<n;i++)
    {
        arr[i]=rev[i];
    }
    printf("\nAfter reversing the array\n");
    for (int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
 
    return 0;
}