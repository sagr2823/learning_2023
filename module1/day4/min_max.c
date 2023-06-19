#include <stdio.h>
#include <limits.h>

int main()
{
    int size,min=INT_MAX,max=INT_MIN;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the  array elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<size;i++)
    {
        if (arr[i]<min) {
            min=arr[i];
        }

        if(arr[i]>max) {
            max=arr[i];
        }
    }

    printf("The min element is %d\n",min);
    printf("The max element is %d\n",max);

    return 0;
}
