#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void segundo(int a, int b, int c)
{
	int delta;
	float x1,x2;
	
	delta= (b*b)-(4*a*c);
	
	if(delta>=0)
	{
		x1= -b+sqrt(delta)/(2*a);	
		x2= -b-sqrt(delta)/(2*a);
		printf("\nX1:%f", x1);
		printf("\nX2:%f", x2);			
	}
	else
	{
		printf("\nNão há raizes!");	
	}
}


int main(int argc, char *argv[]) 
{
	int A,B,C;
	
	printf("\n---------------programa que calcula raizes-----------------");
	
	printf("\nDigite o valor de A:");
	scanf("%d",&A);
	printf("\nDigite o valor de B:");
	scanf("%d",&B);
	printf("\nDigite o valor de C:");
	scanf("%d",&C);
	
	segundo(A,B,C);
	
	return 0;
}
