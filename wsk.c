#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define n 100

void losuj(int *t){
		srand(time(0));
		int i;
		for(i=0;i<n;i++){
			*(t+i) = rand()%236;
		}
}

void wyswietl(int *t){
			int i;
			for(i=0;i<n;i++){
			printf(" %d,", *(t+i));
		}	
}

void sortuj(int *t){
	int i,j,zm;
		for(j=0;j<n;j++){
			for(i=0;i<n-1;i++){
				
			if (*(t+i) > *(t+i+1) )
			{	zm = *(t+i);
				*(t+i) = *(t+i+1);
				*(t+i+1) = zm; 
			}
			
			}
			}
			
			printf("\n****************************************** \n");

		}

int main(){
	int tab[n];
	
	losuj(tab);
	wyswietl(tab);
	sortuj(tab);
	wyswietl(tab);
}
