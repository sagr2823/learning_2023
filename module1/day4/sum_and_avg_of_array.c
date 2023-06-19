#include <stdio.h>
 
int main()
{
    int size,sum=0,avg=011;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the  array elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    avg=sum/size;
    printf("Sum of the array is: %d",sum);
    printf("Average of the array element is: %d",avg);
 
 
    return 0;
}