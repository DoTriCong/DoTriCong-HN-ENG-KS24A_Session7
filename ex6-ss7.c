#include<stdio.h>

int main(){
	int a[5]={1,2,3,4,5};
	
	for(int i = 0; i<5; i++){
		if(a[i]%2!=0){
			a[i]+=2;
		}else{
			a[i]+=3;
		}
	}
	for(int i = 0; i<5; i++){
		printf("array[%d] sau khi doi la: %d\n",i,a[i]);
	}
}
