#include <stdio.h>

void Expo(double *x) {
    unsigned long long *ptr = (unsigned long long *)x;
    unsigned long long exponent = (*ptr >> 52) & 0x7FF;
    printf("Hexadecimal: 0x%llx\n", exponent);
    printf("Binary: 0b");
    for (int i = 10; i >= 0; i--) {
        printf("%d", (exponent >> i) & 1);
    }
    printf("\n");
}
int main() {
    double x = 0.7;
    Expo(&x);
    
    return 0;
}