//Ingresar 3 numeros y mostrar la suma y el promedio//

#include<stdio.h>

int main()
{
	int num1 , num2 , num3 , suma , promedio;
	printf("ingrese el primer digito: ");
	scanf("%d",&num1); 
	printf("ingrese el segundo digito: ");
	scanf("%d",&num2);
	printf("ingrese el tercer digito: ");
	scanf("%d",&num3);	
	suma=num1 + num2 + num3;
	printf("\n la resultado de la suma de los 3 numeros es: %d",suma);
	
	promedio = (num1 + num2 + num3)/3;
	printf ("\n el promedio final es el siguiente: %d",promedio);
	
	return 0;
	
}

