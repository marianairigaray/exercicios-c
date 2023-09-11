#include <stdio.h>
#include <stdlib.h>

/*Brincando Com String - EXERCICIO 3 - Mariana Stefani Irigaray 4212

3. Escrever um programa que lê duas strings e informa o tamanho, a igualdade entre elas e no final escrever as strings concatenadas.
*/

float tamString(char str[]){

    int i, a, b;

    for(i=0; i<30; i++){
        if(str[i] == '\0'){
            break;
        }
    }
    return i;
}

float contcatString(char str1[], char str2[]){

    char str3[30];
    int a, j;

    a = tamString(str1);

    for(j=0; str2[j] != '\0'; j++, a++){
        str1[a] = str2[j];
    }
    str1[a] = '\0';
    printf("\n%s\n", str1);
}

int main()
{
    char s1[30], s2[30];
    int a, b;

    printf("Digite uma frase:\n");
    gets(s1);
    printf("Digite outra frase:\n");
    gets(s2);

    a = tamString(s1);
    b = tamString(s2);

    printf("\ntamanho da string %s = %i", s1, a);
    printf("\ntamanho da string %s = %i\n", s2, b);

    if(a>b){
        printf("\n%s e maior", s1);
    }else if(a<b){
        printf("\n%s e maior", s2);
    }else{
        printf("\nAs duas tem o mesmo tamanho");
    }

    printf("\n\nA string %s concatenada com %s fica:", s1, s2);
    contcatString(s1, s2);

    return 0;
}