#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

void swapFields(struct Student *ptrStudent1, struct Student *ptrStudent2) {
    char tempName[50];
    strcpy(tempName, ptrStudent1->name);
    strcpy(ptrStudent1->name, ptrStudent2->name);
    strcpy(ptrStudent2->name, tempName);

    int tempAge = ptrStudent1->age;
    ptrStudent1->age = ptrStudent2->age;
    ptrStudent2->age = tempAge;

    float tempMarks = ptrStudent1->marks;
    ptrStudent1->marks = ptrStudent2->marks;
    ptrStudent2->marks = tempMarks;
}

int main() {
    struct Student student1, student2;

    printf("Enter details for student 1:\n");
    printf("Enter name: ");
    scanf(" %[^\n]s", student1.name);
    printf("Enter age: ");
    scanf("%d", &student1.age);
    printf("Enter marks: ");
    scanf("%f", &student1.marks);

    printf("\nEnter details for student 2:\n");
    printf("Enter name: ");
    scanf(" %[^\n]s", student2.name);
    printf("Enter age: ");
    scanf("%d", &student2.age);
    printf("Enter marks: ");
    scanf("%f", &student2.marks);

    printf("\nBefore swapping:\n");
    printf("Student 1:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Marks: %.2f\n", student1.marks);

    printf("\nStudent 2:\n");
    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);
    printf("Marks: %.2f\n", student2.marks);

    swapFields(&student1, &student2);

    printf("\nAfter swapping:\n");
    printf("Student 1:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Marks: %.2f\n", student1.marks);

    printf("\nStudent 2:\n");
    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);
    printf("Marks: %.2f\n", student2.marks);

    return 0;
}

