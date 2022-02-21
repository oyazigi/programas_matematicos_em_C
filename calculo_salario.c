#include<stdio.h>
int main (void)
{
	int horas;
	int extras;
	float valor_hora;
	float salario_bruto;

	
	printf("Digite o numero de horas comuns trabalhadas ");
	scanf("%d",&horas);
	printf("Digite o numero de horas extras ");
	scanf("%d",&extras);
	printf("Digite o valor da hora ");
	scanf("%f",&valor_hora);
	salario_bruto = (valor_hora * horas) + (valor_hora * 2 * extras);
	printf("O Seu salario bruto e igual a: %.2f", salario_bruto);
	
	
}