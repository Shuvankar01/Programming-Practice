#include <stdio.h>

struct Student {
    int id;
    float marks;
};

int main() {

    struct Student s1;

    s1.id = 101;
    s1.marks = 89.5;

    printf("Student ID: %d\n", s1.id);
    printf("Marks: %.2f", s1.marks);

    return 0;
}