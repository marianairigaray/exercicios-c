#include <stdio.h>
#include <stdlib.h>

float n1, n2;

int soma(int n1, int n2){
    int result;
    result=n1+n2;
    return result;
}

float sub(float n1, float n2){
    float result;
    result=n1-n2;
    return result;
}

float mult(float n1, float n2){
    float result;
    result=n1*n2;
    return result;
}

float divisao(float n1, float n2){
    float result;
    result=n1/n2;
    return result;
}

int main()
{
    int s, m;
    float v, d;
    char operacao;

    printf("Digite dois numeros:\n");
    scanf("%f%f", &n1, &n2);

    printf("Digite a operacao :");
    scanf(" %c", &operacao);

   printf("\nVoce escolheu a operacao de %c\n", operacao);

    switch(operacao){
        case '+':
            s=n1+n2;
            printf("O resultado da soma e %i\n", s);
            break;
        case '-':
             m=n1-n2;
             printf("O resultado da subtracao e %i\n", m);
             break;
        case '*':
             v=n1*n2;
             printf("O resultado da multiplicacao e %f\n", v);
             break;
        case '/':
             d=n1/n2;
             printf("O resultado da divisao e %f\n", d);
             break;
        default:
            printf("Voce colocou a operacao errada!");
            break;
    }
    return 0;
}
