#include <stdio.h>
int main(){
    int n=1;
    int rows = 5;
    for (int i=1;i<=rows;i++){
        for (int j=0;j<2*(rows-i)-1;j++){
            printf(" ");
        }
        for (int k=1;k<=i;k++){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;   
}