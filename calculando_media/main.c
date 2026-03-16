#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, m;

    do{
    printf("Digite a primeira nota:\n");
    scanf("%i", &n1);
    }while(n1<0 || n1>10);

    do{
    printf("Digite a segunda nota:\n");
    scanf("%i", &n2);
    }while(n2<0 || n2>10);

    do{
    printf("Digite a terceira nota:\n");
    scanf("%i", &n3);
    }while(n3<0 || n3>10);

    m = (n1+n2+n3)/3;
    if (m>=8){
        printf("Excelente\n");
    }
    else if(m>=6 && m<8){
        printf("Mediocre\n");
    }
    else {
        printf("Insuficiente\n");
    }
    return 0;
}
