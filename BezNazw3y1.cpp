#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void losuj(int *t, int n, int od,int dol){
	int i;
	srand(time(0));
	
	for(i=0;i<n;i++){
	*(t + i)= rand()%(dol - od) * od;
	
	}
}

void wyswietl(int *t, int n){
	int i;
	for(i=0;i<n;i++){
	printf("%d ", *(t+i));
	}
printf("\n xxxxxxxxxxxxxxxxxxxxxxxxxxxx \n");


}
void sortuj(int *t, int n){
	int i,j,tmp;
	
	for(j=0;j<n;j++){
	for(i=0;i<n-1;i++){
	if (*(t+i) > *(t+i+1)){
	tmp = *(t+i);
	*(t+i)= *(t+i+1);
	*(t+i+1)= tmp;
	
	
	}
		
	}
		
	}
		
}







int main(){
	int x,tab[10];
	x = sizeof(tab)/4;
	losuj (tab,x,10, 10000);
	wyswietl(tab,x);
	sortuj(tab,x);
	wyswietl(tab,x);

}



