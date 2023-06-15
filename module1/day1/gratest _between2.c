#include <stdio.h>
int Max2(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int n1 = 28, n2 = 5;
    printf("Max number: %d\n", Max2(n1, n2););
    return 0;
}