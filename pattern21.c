#include <stdio.h>

int main() {
    int i, j, n = 5, num = 2;  
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num += 2;  
        }
        printf("\n");
    }

    return 0;
}
