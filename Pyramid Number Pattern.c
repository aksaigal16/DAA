#include<stdio.h>
int main(){
	for(int i=0;i<=4;i++){
	for(int j=0;j<=4-i;j++){
	printf("  ");
	}
	for(int k=0;k<=i;k++){
	printf("%d ",k+1);
	}
	for(int l=i-1;l>=0;l--){
	printf("%d ",l+1);
	}
	printf("\n");
    }
return 0;
}