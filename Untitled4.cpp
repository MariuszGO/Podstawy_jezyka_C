#include <stdio.h>

int objetosc(int a, int b, int c)
{
	int w;
	if(a <= 0 || b <=0 || c <=0 ){
		printf("Podane boki nie tworz¹ prostopad³oscianu");
		return 0;
	} else{
	
	
	w = a * b *c;
	return w;
	}
}


int main(){
	int wy,a,b,c,wy2;
	
	printf("Podaj bok a");
	scanf("%d", &a);
	printf("Podaj bok b");
	scanf("%d", &b);
	printf("Podaj bok c");
	scanf("%d", &c);
	
	wy = objetosc(a,b,c);
	wy2 = objetosc(212,12,21);
	
	printf("Objetosc %d \n", wy);
	printf("Objetosc %d \n", wy2);
}

