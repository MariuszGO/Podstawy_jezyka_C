#include <stdio.h>
#define pi 3.14
int potega_liczby(int liczba, int potega){
	int i,w;
	w= liczba;
	
	for (i = 1; i < potega; i++){
		w = w *liczba;
	}	
	return w;
}

double pole_kola(int r){
		double wy;
		wy = pi * r * r;	
		return wy;
}

//https://github.com/MariuszGO/podstawy_jezyka_c



int main(){
	
	int wyn,wyn1,w2;
	double w;
	
	wyn = potega_liczby(4,6);
	wyn1 = potega_liczby(2,3);
	w2 = potega_liczby(33,2);
//	printf(" %d \n", wyn);
//	printf(" %d \n", wyn1);
//	printf(" %d \n", w2);
	
	w = pole_kola(2);
	printf(" %lf ", w);
}

