#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	float base;
	float altura;
	float area;
	
	printf("Digite a base do triangulo ");
	scanf("%f",&base);
	printf("Digite a altura do triangulo ");
	scanf("%f",&altura);
	area = (base * altura) / 2;
	printf("a area do triangulo eh %.2f ",area);
	system("pause");
	
}