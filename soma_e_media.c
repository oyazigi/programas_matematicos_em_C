#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int A;
	int B;
	int C;
	int D;
	float soma;
	float media;
	
	printf("Digite o primeiro numero ");
	scanf("%d",&A);
	printf("Digite o segundo numero ");
	scanf("%d",&B);
	printf("Digite o terceiro numero ");
	scanf("%d",&C);
	printf("Digite o quarto numero ");
	scanf("%d",&D);
	soma = A + B + C + D;
	media = soma / 4;
	printf("A soma desses numeros e igual a: %.2f \n", soma);
	printf("A media desses numeros e igual a: %.2f", media);
	
	
}