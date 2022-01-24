#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>




int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	
	
	float notas [5][3];
	char nome[5][50] = {0x00};
	int i = 0;
	int j = 0;
	
	
	printf("\n-----------Programa de Notas---------\n");
	
	
	printf("Digite o nome dos alunos: \n");
	for (i=0;i<4;i++){
		printf("\nDigite o nome do(a) %dº aluno(a): ",i+1);
		scanf("%s",&nome[i]);	
	
	}
	printf("\nDigite a nota dos alunos: ");
	for(j=0;j<4;j++){
		printf("\nNota do(a) aluno(a) %s: \n",nome[j]);
		for (i = 0; i <= 2; i++){
			printf("Digite a %dª nota: ",i+1);
			scanf("%f",&notas[j][i]);
		}
		 
}
	for (j=0;j<4; j++){
		printf("\nAluno(a): %s\n",nome[j]);
					for (i = 0; i < 3; i++){
						printf("%dª nota: %.2f\n",i+1,notas[j][i]);
						
					}
	}
	return 0;
}
