#include <stdio.h>



void fib(int a, int b){
		printf("[%d] [%d] ",a,b);
		
		
		int i, c, d, t[30];
		t[0]=a;
		t[1]=b;
		
		for( i = 2; i < 30; i++){
					t[i]=t[i-1]+t[i-2]; 	
			printf(" [%d]",t[i]);
		}
}


int main(){
	
	fib(0,1);
}

