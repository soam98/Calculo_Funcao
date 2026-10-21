#include <stdio.h>
#include <math.h>
int main() 
{
/*
	// exercícios 1 - 5
	
	float c1 = -1000.0;
	float c2 = 1000.0;
	float z = 0.0;
	float contador = 0.0;
	float resultado = 0.0; 
	
	for(contador = (float)0; contador <= (float)30; contador++)
		{
			z = (float)(c1+c2)/(float)2;
			resultado = (float)(z*z*z) - (float)2*(float)z + (float)10;
		
			if(resultado > (float)0)
				{
					c2 = z;
				}
			else
				{
					c1 = z;
				}
			printf("c1 = %.2f, c2 = %.2f, z = %.2f, resultado = %.2f\n", c1, c2, z, resultado);
		}
	return 0;
}

*/
	// exercício 6 
	
	float a;
	float b;
	float c;
	float d;
	float contador;
	float resultado;
	float z;

	
	printf("Insira o valor de a: ");
	scanf("%f", &a);
	printf("Insira o valor de b: ");
	scanf("%f", &b); 
	printf("Insira o valor de c: ");
	scanf("%f", &c); 
	printf("Insira o valor de d: ");
	scanf("%f", &d); 
	
	float c1 = (c/(float)2) * (float) 1000;
	float c2 = (-(c)/(float)2) * (float) 1000;
	
	for(contador = (float)0; contador <= (float)30; contador++)
		{
			z = ((float)c1 + (float)c2)/(float)2;
			resultado = (float)a * (z*z*z) + (float)b * (z*z) + (float)c * z + (float)d;
		
			if(resultado > (float)0)
				{
					c2 = z;
				}
			else
				{
					c1 = z;
				}
			printf("c1 = %.2f, c2 = %.2f, z = %.2f, resultado = %.2f\n", c1, c2, z, resultado);
		}
	return 0; 
}
