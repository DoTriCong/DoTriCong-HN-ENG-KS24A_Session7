#include <stdio.h>

int main(){
	int num[5];
	int i;
	for (i=1; i <= 5; i++){
		printf("Nhap vao phan tu thu %d: ", i);
		scanf("%d",&num[i]);
	}
	for(i=num[i]; i<=5 ; i++){
		printf("num[%d] = %d \n",i, num[i]);
	}
	return 0; 
}
