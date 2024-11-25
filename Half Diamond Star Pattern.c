#include<stdio.h>
int main(){
	for(int i=0;i<=4;i++){
	for(int j=0;j<=i;j++){
    printf("* ");
	}
	printf("\n");
	}
	for(int m=4-1;m>=0;m--){
	for(int n=0;n<=m;n++){
	printf("* ");
	}
	printf("\n");
	}
	return 0;
}