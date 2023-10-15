#include <stdio.h>

int multiply(int x, int y);

int multiply(int x, int y) {
    return x * y;
}

int main() {
    printf("%s", "Teraz z makefilem c:");

    int z = multiply(10, 15);

    return 0;
}