#include<stdio.h>
int main(){
	for(int i=0;i<=3;i++){
	for(int j=0;j<=3-i-1;j++){
	printf(" ");
	}
	for(int k=0;k<=3;++k){
	printf("* ");
	}
	printf("\n");
	}
	return 0;
}