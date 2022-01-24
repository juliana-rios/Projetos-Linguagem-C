#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main (){
 int i;
  float notas[3],media,total;
 setlocale(LC_ALL, "portuguese");
 	printf("Digite as suas 3 notas :\n ");
 	
 for (i=0;i<3;i++)
   scanf("%f",&notas[i]);
   
  for (i=0;i<5;i++)
   total+=notas[i];
   media=total/3;
    
	printf("A sua média é : %.1f\n",media); 
 system("pause");	
 return 0;
}
