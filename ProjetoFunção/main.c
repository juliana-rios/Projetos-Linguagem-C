#include <string.h>

char nome[3][80];


void Ordena(){
	
	int x,y,r;
	char auxiliar[80];
	
	for(x=0;x<=2;x++){
		for(y=x+1; y<=2; y++){
			r = strcmp(nome[x], nome[y]);
			
			if (r >= 0){
				strcpy(auxiliar, nome[x]);
				strcpy(nome[x], nome[y]);
				strcpy(nome[y], auxiliar);
				
			}
		}
	}
}
main() {
	int x;
	printf("Digite 3 nomes: \n");
	for (x=0; x<=2 ; x++){
	gets(nome[x]);
	}
	
	Ordena();
	printf("A ordem dos nomes e: \n");
	for(x = 0; x <=2; x++){
		puts(nome[x]);
	}
	
	return 0;
}
