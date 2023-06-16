#include<stdio.h>
#include<limits.h>

int main() {
    int max = INT_MIN;
    int min = INT_MAX;
    int rem, num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while (num > 0) {
        rem = num % 10;
        if (rem < min) {
            min = rem;
        }
        
       
        if (rem > max) {
            max = rem;
        }
        num /= 10;
    }
    if(max==min){
        printf("Invalid");
    }
    else{
    printf("Max: %d Min: %d\n", max, min);
        
    }
    
    return 0;
}
