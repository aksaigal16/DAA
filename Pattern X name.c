#include<stdio.h>
int main(){
	char name[7]="AKSHIT";
	for(int i=0;i<6;i++){
	for(int j=0;j<6;j++){
	if(i==j||i+j==6-1){
	printf("%c",name[j]);
	}
	else{
	printf(" ");
	}
	}
	printf("\n");
	}
	return 0;
}