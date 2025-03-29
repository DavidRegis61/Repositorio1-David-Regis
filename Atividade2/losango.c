#include<stdio.h>
#include<stdlib.h>
#include<math.h>
    int main(int argc, char* argv[]){

        printf("\t AREA DO LOSANGULO \n");

        float menor, maior, area;
    
        printf("Informe a diagonal maior do losangulo! \n");
        scanf("%f", &maior);
    
        printf("Informe a diagonal menor do losangulo! \n");
        scanf("%f", &menor);
    
        area=(maior*menor)/2;
    
        printf("A area total do losangulo e: %.2f \n",area);
        system("pause");
        return 0;






    }