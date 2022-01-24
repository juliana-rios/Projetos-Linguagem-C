#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int mat [3][3];
	int vet[3];
	int i,j;
	int soma=0;
	
	printf("\nDigite os dados da matriz: ");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		  printf("mat[%d][%d]:",i,j);
		  scanf("%d", &mat[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			soma=soma+mat[i][j];
			vet[i]=soma;
		}
		soma=0;
	}
	return 0;
}
