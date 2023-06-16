#include <stdio.h>

int main() {
    int n;
    printf("Enetr the array size ");
    scanf("%d",&n);
    int arr[n] ;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum = 0;

    for (int i = 0; i < n; i += 2) {
        sum += arr[i];
        //printf("%d",arr[i]);
    }

    printf("Sum of alternate elements: %d\n", sum);

    return 0;
}
