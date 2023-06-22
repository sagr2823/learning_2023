#include <stdio.h>

struct Box {
    float length;
    float width;
    float height;
};

float calculateVolume(struct Box *ptrBox) {
    return ptrBox->length * ptrBox->width * ptrBox->height;
}

float calculateSurfaceArea(struct Box *ptrBox) {
    float length = ptrBox->length;
    float width = ptrBox->width;
    float height = ptrBox->height;
    
    return 2 * (length * width + length * height + width * height);
}

int main() {
    struct Box myBox;
    struct Box *ptrBox = &myBox;

    ptrBox->length = 5.0;
    ptrBox->width = 3.0;
    ptrBox->height = 2.0;

    printf("Volume of the box using '*': %.2f\n", (*ptrBox).length * (*ptrBox).width * (*ptrBox).height);
    printf("Surface area of the box using '*' : %.2f\n", 2 * ((*ptrBox).length * (*ptrBox).width + (*ptrBox).length * (*ptrBox).height + (*ptrBox).width * (*ptrBox).height));

    printf("Volume of the box using '->': %.2f\n", ptrBox->length * ptrBox->width * ptrBox->height);
    printf("Surface area of the box using '->': %.2f\n", 2 * (ptrBox->length * ptrBox->width + ptrBox->length * ptrBox->height + ptrBox->width * ptrBox->height));
 
    
    return 0;
}

