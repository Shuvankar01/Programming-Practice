#include <stdio.h>

struct Book {
    char name[50];
    int id;
};

int main() {
    struct Book b;

    printf("Enter Book Name: ");
    scanf(" %[^\n]", b.name);

    printf("Enter Book ID: ");
    scanf("%d", &b.id);

    printf("Book Name: %s\n", b.name);
    printf("Book ID: %d", b.id);

    return 0;
}