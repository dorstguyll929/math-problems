#include <stdio.h>

int main() {
    int i;
    printf("Enter the number of elements: ");
    scanf("%d", &i);
    
    if (i % 2 == 0) {
        for (i = 1; i <= i / 2 + 1; i++) {
            if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
                printf("%d", i);
                break;
            }
        }
    } else {
        for (i = 1; i <= i / 2 + 1; i++) {
            if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
                printf("%d", i);
                break;
            }
        }
    }

    return 0;
}
