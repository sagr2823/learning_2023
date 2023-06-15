#include <stdio.h>

int main() {
    int Roll_No;
    char Name[50];
    float Physics, Maths, Chemistry;
    
    printf("Enter The Roll No: ");
    scanf("%d", &Roll_No);
    
    printf("Enter The Name: ");
    scanf(" %[^\n]s", Name);
    
    printf("Enter The Mark In Physics : ");
    scanf("%f", &Physics);
    
    printf("Enter The Mark In Maths : ");
    scanf("%f", &Maths);
    
    printf("Enter The Mark In Chemistry Marks: ");
    scanf("%f", &Chemistry);
    
    float total = Physics + Maths + Chemistry;
    float P = (total / 300) * 100;
    
    printf("\n----- Summary -----\n");
    printf("Roll No: %d\n", Roll_No);
    printf("Name: %s\n", Name);
    printf("Physics Marks: %.2f\n", Physics);
    printf("Math Marks: %.2f\n", Maths);
    printf("Chemistry Marks: %.2f\n", Chemistry);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f% %\n", P);
    
return 0;
}