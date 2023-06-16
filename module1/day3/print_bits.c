#include <stdio.h>

void print_Bits(unsigned int num) {
    for (int i = 31; i >= 0; i--) {
        unsigned int bit = (num & (1 << i)) ? 1 : 0;
        printf("%u", bit);
    }
    printf("\n");
}

int main() {
    unsigned int num;
    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);
    printf("Binary representation: ");
    print_Bits(num);
    return 0;
}
