#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
	{
	int tabuada = 0, x;
	printf("\nDigite a tabuada que deseja \n\n\n\n ");
	scanf("%i", &tabuada);
	
	for(int x=1; x<=10; x++){
		printf("%ix%i = %i\n", x, tabuada, x * tabuada);	
	}
	
	return 0;
}
