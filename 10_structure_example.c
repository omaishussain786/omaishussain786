#include <stdio.h>
struct Student {
    int id;
    char name[50];
    float marks;
};
int main() {
    struct Student s1;
    printf("Enter ID: ");
    scanf("%d", &s1.id);
    printf("Enter name: ");
    scanf(" %[^
]", s1.name);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    printf("Student Info:\nID: %d\nName: %s\nMarks: %.2f\n", s1.id, s1.name, s1.marks);
    return 0;
}