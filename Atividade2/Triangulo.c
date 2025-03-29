#include<stdio.h>
#include<stdlib.h>
#include<math.h>
    int main(int argc, char* argv[]){

        printf("\t AREA DO TRIANGULO \n");
        float base;
        printf("Informe o tamanho da base do triangulo! \n");   
        scanf("%f", &base);

        float altura;
        printf("Informe a altura do triangulo!");
        scanf("%f", &altura);
        
        float area=(base*altura)/2;

        
        printf("A area total do triangulo e: %.2f \n", area);    
        system("pause");
    
        return 0;
    }