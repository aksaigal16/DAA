#include <stdio.h>

int main() {
    int i, j, n = 4;  

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            
            if ((i + j) % 2 == 0) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
