#include <stdio.h>

int main() {
    int i = 0;
    printf("I'm a C program.\n");
    printf("I have a number of comments here.\n");

    for (i = 1; i <= 5; ++i) {
        printf("%d", i);
        if (i == 3) break;
    }

    return 0;
}
