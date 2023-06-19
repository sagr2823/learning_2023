#include <stdio.h>
int main(void)
{
    int n,odd_sum=0,even_sum=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the  array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (int i=0;i<n;i++)
    {
        if((i+1)%2==0){
            even_sum+=arr[i];
        }
        else{
            odd_sum+=arr[i];
        }
    }
    printf("Sum of the even  elements %d\n",even_sum);
    printf("Sum of the odd elements %d\n",odd_sum);
    printf("Difference betwn even and odd=%d",even_sum-odd_sum);
   
    
 
    return 0;
}