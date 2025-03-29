#include<stdio.h>
#include<stdlib.h>
#include<math.h>
    int main(int argc, char* argv[]){

        printf("\t AREA DO TRAPEZIO \n");

        float menor, maior, altura, area;
    
        printf("Informe a base maior do trapezio! \n");
        scanf("%f", &maior);
    
        printf("Informe a base menor do trapezio! \n");
        scanf("%f", &menor);

        printf("informe a altura do trapezio! \n");
        scanf("%f", &altura);
        area=((maior+menor)*altura)/2;
    
        printf("A area total do trapezio e: %.2f \n",area);
        system("pause");
        return 0;






    }