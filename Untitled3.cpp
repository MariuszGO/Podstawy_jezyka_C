#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){
	
	srand(time(0));
	int i,min,max;	
	int tablica [100]; //deklaracja tablicy
	
	
	
	
	for (i=0; i<100 ; i++){
		
		tablica [i] = rand()%300+600;
		printf("%d ", tablica[i]);
	}
	
	
	min = tablica[0];
	max = tablica[0];
	
	for (i=0; i<100 ; i++){
	
		if( tablica[i] > max) max = tablica[i];	
		if( tablica[i] < min) min = tablica[i];
	}
	
	printf("\n Max : %d ", max);
 	printf("\n Min : %d ", min);
	
}
