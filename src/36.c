#include <stdio.h>
int main() {
    int i = 0;
    while (i <= 15) {
        if (i % 2 == 0) {
            printf("Even: ");
            i++;
        } else {
            printf("Odd: ");
            i++;
        }
    }
    return 0;
}
