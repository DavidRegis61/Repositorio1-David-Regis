    #include<stdio.h>
    #include<math.h>
    int main(int argc, char* argv[]){

    float n1,n2;

    printf("adicione o primeiro valor! \n");
    scanf("%f", &n1);
    printf("Adcione o segundo valor! \n");
    scanf("%f", &n2);

//adiçao
float soma;
soma=(n1+n2);
printf("A soma dos numero e: %.2f \n", soma);
//subtraçao
float sub;
sub = (n1-n2);
printf("O resultado da subtraçao e: %.2f \n", sub);
//mutiplicaçao
float mult;
mult=n1*n2;
printf("O resultado da multiplicaçao e: %.2f \n", mult);
//divisao
float div;
div=n1/n2;
printf("O resultado da e: %.2f \n", div);
//potenciaçao
float poten;
poten=powf(n1, n2);                                                                                                                                                    
printf("O resultado da potencia e: %.2f \n", poten);

//radiciaçao
float raiz;
raiz=sqrtf(n1);
printf("O resultado da radiciaçao e: %.2f \n", raiz);

//reasto da divisao
int resto;
resto=(int)n1%(int)n2;
printf("O resultado da resto e: %i \n", resto);
//quociente_inteiro
int quociente_inteiro=n1/(int)n2;
printf("O resultado da quociente inteiro e: %.2f \n", quociente_inteiro);
//incremento
n1++;
printf("O resultado do incremento e: %.2f \n ",n1++);
//decremento
n1--;
printf("O resultado do decremento e: %.2f \n ",n1--);

}