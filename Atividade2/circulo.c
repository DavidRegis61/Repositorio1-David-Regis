#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc, char* argv[]){

    printf("\t AREA DO CIRCULO \n");

    float raio;
    printf("Informe o raio da circulo! \n");
    scanf("%f",&raio);
 
    float area= M_PI*(raio*raio);
 
    printf("A area do circulo e: %.3f \n",area);
    system("pause");
    return 0;
}