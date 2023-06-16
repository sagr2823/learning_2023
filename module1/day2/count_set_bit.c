#include <stdio.h>

int count_Set_Bits(int num) {
    int count = 0;
    
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    
    return count;
}

int main() {
    
    int arr[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(arr) / sizeof(arr[0]);
    int total_Bits = 0;

    for (int i = 0; i < size; i++) {
        total_Bits += count_Set_Bits(arr[i]);
    }

    printf("Total number of set bits: %d\n", total_Bits);

    return 0;
}
