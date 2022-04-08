#include <stdio.h>

int potega_liczby(int liczba, int potega){
	int i,w;
	w= liczba;
	
	for (i = 1; i < potega; i++){
		w = w *liczba;
	}	
	return w;
}


int main(){
	
	int wyn,wyn1,w2;
	
	wyn = potega_liczby(4,6);
	wyn1 = potega_liczby(2,3);
	w2 = potega_liczby(33,2);
	printf(" %d \n", wyn);
	printf(" %d \n", wyn1);
	printf(" %d ", w2);
}

