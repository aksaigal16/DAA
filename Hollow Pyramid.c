#include<stdio.h>
int main(){
	for(int i=1;i<=4;i++){
	for(int j=i;j<=4;j++){
	printf("  ");
	}
	for(int k=1;k<=2*i-1;k++){
	if(k==1||k==2*i-1||i==4){
	printf("* ");
	}
	else{
	printf("  ");
	}
	}
	printf("\n");
	}
	return 0;
}