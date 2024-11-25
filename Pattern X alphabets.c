#include<stdio.h>
int main(){
	char n='A';
	for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
	if(i==j||i+j==5-1){
	printf("%c",n++);
	}
	else{
	printf(" ");
	}
	}
	printf("\n");
	}
	return 0;
}