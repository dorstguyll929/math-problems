#include <stdio.h>

int main() {
    int i;
    printf("Enter n: ");
    scanf("%d", &i);

    if (i % 2 == 0) {
        for (i = 1; i <= i * i; i += 2);
        printf("The squares are: %d", i);
    } else {
        for (i = 1; i <= i * i - 1; i += 2);
        printf("The squares are: %d", i);
    }

    return 0;
}
