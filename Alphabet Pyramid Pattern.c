#include<stdio.h>
int main(){
    char a='A';
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4-i;++j){
            printf("  ");
        }
        for(int k=0;k<2*i-1;k++){
            printf("%c ",a+i-1);
        }
        printf("\n");
    }
    return 0;
}