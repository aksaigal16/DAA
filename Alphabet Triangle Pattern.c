#include<stdio.h>
int main(){
    char alphabet='A';
    for(int i=0;i<=3;i++){
        for(int j=0;j<=i;j++){
            printf("%c ",alphabet+i);
        }
        printf("\n");
    }
    return 0;
}