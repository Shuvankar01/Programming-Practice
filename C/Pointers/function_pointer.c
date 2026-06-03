#include <stdio.h>

void message() {
    printf("Function Pointer Example");
}

int main() {
    void (*funcPtr)();

    funcPtr = message;

    funcPtr();

    return 0;
}