#include <stdio.h>

void fib(int a, int b){
		printf("[%d] [%d] ",a,b);
		
		
		int i, c, d, t[100];
		t[0]=a;
		t[1]=b;
		
		for( i = 2; i < 100; i++){
					t[i]=t[i-1]+t[i-2]; 	
			printf(" [%d]",t[i]);
		}
}


int main(){
	int wy,a,b,c,wy2;
	

	
	fib(0,1);
}

