#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3

int main(){

int t[N][N];
int i,j,max;

srand(time(0));

for ( i = 0 ; i < N ; i++)
{
	for (j = 0 ; j < N; j++){
							t[i][j] = rand()%9000;  //0 - 9000
							}
}

max = t[0][0];
for ( i = 0 ; i < N ; i++)
{
	for (j = 0 ; j < N; j++){
							printf("%d ", t[i][j]);
							if (max < t[i][j]){
												max = t[i][j];	
												}
							}
	printf("\n");
}

printf ("\nMAX: %d", max);

}

