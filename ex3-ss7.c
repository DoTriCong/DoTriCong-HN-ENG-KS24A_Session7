#include <stdio.h>

int main(){
	int count=1,i=0;
	int number[5]= {7,3,5,9,1};
	for ( i= 0; i < 5; i++){
	if(number[i] %2 ==0){
		count++;
		printf("So chan la: %d\n", number[i]);
	}
}
		for (i= 0; i < 5; i++){
		if(number[i] %2 !=0){
			count--;
	
			printf("%d,",number[i]);
	}

	}
	return 0; 
}


	
