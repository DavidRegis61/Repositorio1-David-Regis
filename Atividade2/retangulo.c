#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc, char* argv[]){
    printf("\t AREA DO RETANGULO \n");

    float base, altura, area;

    printf("Informe a base do retangulo! \n");
    scanf("%f", &base);

    printf("Informe a altura do retangulo! \n");
    scanf("%f", &altura);

    area=base*altura;

    printf("A area total do retangulo e: %.2f \n",area);
    system("pause");
    return 0;
}