#include<stdio.h>
int main(){
    int sum=0;
	int arr[5]={1,2,3,4,5};
	for(int i=0;i<=4;i++){
	sum+=arr[i];
	}
	printf("the sum of elements in an array is %d",sum);
	return 0;
}