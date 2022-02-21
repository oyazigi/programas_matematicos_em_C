#include<stdio.h>
int main (void)
{
	double R;
	float area;
	float volume;
	
	printf("Digite o valor de R ");
	scanf("%lf",&R);
	area = 3.14 * (R * R);
	printf("A área do circulo e igual a: %.3f\n", area );
	volume=4*3.14*R*R*R/3;
	printf("O volume da esfera e igual a: %.3f", volume);
}