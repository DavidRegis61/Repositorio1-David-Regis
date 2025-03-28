	#include<stdio.h>
	#include<stdlib.h>
	int main(){
	printf("\t CALCULADORA DE IMC! \n");
	system("pause");
	float altura;
	printf ("Informe sua altura! \n");
	scanf("%f", &altura);
	float peso;
	printf("informe seu peso! \n");
	scanf("%f", &peso);
	float imc;
	imc=(peso/(altura*altura));
	
	printf("O resultado do seu IMC e: %.2f \n", imc);
	system("pause");
	
}
