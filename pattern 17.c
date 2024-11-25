#include <stdio.h>

int main() {
    int i, j, n = 5; 
    
    for (i = 1; i <= n; i++) {
        
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
       
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n"); 
    }

    for (i = n - 1; i >= 1; i--) {
        // Printing spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Printing increasing numbers
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Printing decreasing numbers
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
