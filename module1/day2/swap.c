#include <stdio.h>

void swap(void *a, void *b, size_t size) {
    char temp[size];
    for (size_t i = 0; i < size; i++) {
        temp[i] = *((char *)a + i);
    }
    for (size_t i = 0; i < size; i++) {
        *((char *)a + i) = *((char *)b + i);
    }
    for (size_t i = 0; i < size; i++) {
        *((char *)b + i) = temp[i];
    }
}

int main() {
    int int1 = 10, int2 = 20;
    printf("Before swapping integer value: int1 = %d, int2 = %d\n", int1, int2);
    swap(&int1, &int2, sizeof(int));
    printf("After swapping integer value: int1 = %d, int2 = %d\n", int1, int2);

    double double1 = 3.14, double2 = 2.71;
    printf("Before swapping double value: double1 = %lf, double2 = %lf\n", double1, double2);
    swap(&double1, &double2, sizeof(double));
    printf("After swapping double value: double1 = %lf, double2 = %lf\n", double1, double2);

    char char1 = 'A', char2 = 'B';
    printf("Before swapping character value: char1 = %c, char2 = %c\n", char1, char2);
    swap(&char1, &char2, sizeof(char));
    printf("After swapping character value: char1 = %c, char2 = %c\n", char1, char2);

    return 0;
}
