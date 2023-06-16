#include <stdio.h>
void print_Spaces(int space) {
    for (int j = 1; j <= space; j++) {
            printf(" ");
        }
}
int print_Increasing(int row,int i,int j) {
    for ( j = 1; j <= row; j++) {
            if (j <= (row - i))
                printf("%d", j);
            else
                printf(" ");
        }
     return j;   
}
void print_Decreasing(int j,int row,int i) {
    while (j > 0) {
            if (j > (row - i))
                printf(" ");
            else
                printf("%d", j);
            j--;
        }
}

int main() {
    int row;
    printf("Enter the no of row");
    scanf("%d",&row);
    int i, j;
    int space = 0;
    for (i = 0; i < row; i++) {
        print_Spaces(space);
        j=print_Increasing(row,i,j);
        j--;
       print_Decreasing(j,row,i);
        if ((row - i) > 9)
            space = space + 1;
        printf("\n");
    }
    
    return 0;
}
