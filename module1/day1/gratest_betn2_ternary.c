#include <stdio.h>
int Max2(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int n = 28, n2 = 5;
    int max = Max2(n, n2);
    printf("Max number: %d\n", max);
return 0;
}