#include <stdio.h>

int multiply(int x, int y);

int multiply(int x, int y) {
    int z = 0;
    for(int i = 0; i < x; i++) {
        z = z + y;
    }
    return z;
}

int main() {
    printf("%s", "Teraz z makefilem c:");

    int z = multiply(10, 15);

    return 0;
}