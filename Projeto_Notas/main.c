#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float n1, n2, n3, media;
	
	printf("Escreva a primeira nota: ");
	scanf("%f", &n1);
	printf("Escreva a segunda nota: ");
	scanf("%f", &n2);
	printf("Escreva a terceira nota: ");
	scanf("%f", &n3);
	
	media = (n1+n2+n3)/3;
	
	if(media >=7){
	setlocale(LC_ALL, "Portuguese");
	printf("\nA sua média é: %f \nVocê foi aprovado!\n\n\n",media);
	
	}else {
		setlocale(LC_ALL, "Portuguese");
		printf("\nA sua média é: %f \nVocê foi reprovado!\n\n\\n",media);
	}
	
	system("pause");
	return 0;
}

