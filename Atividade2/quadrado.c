#include<stdio.h>
#include<stdlib.h>
#include<math.h>
    int main(int argc, char* argv[]){

    printf("\t AREA DO QUADRADO \n");
    float lado;
    
    printf("Informe o tamanho de um dos lados do quadrado! \n");   
    scanf("%f", &lado);

    float area;
    area=lado*lado;
    
    printf("A area total do quadrado e: %.2f \n", area);    
    system("pause");

    return 0;
}       