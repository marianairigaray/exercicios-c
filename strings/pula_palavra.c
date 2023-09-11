#include <stdio.h>
#include <stdlib.h>

/*BRINCANDO COM STRING - EXERCICIO 2 - MARIANA STEFANI IRIGARAY 4212

2. Escrever um programa que lê uma string s[30]. Uma função deve escrever cada palavra desta string numa nova linha.
*/

void pulaPalavra(char str[]){

    int i;

    for(i=0; i<30; i++){
        printf("%c", str[i]);
        if(str[i]=='\0'){
            break;
        }
        if(str[i]==' '){
            printf("\n");
        }
    }

}

int main()
{
    char s[30];

    printf("Digite uma frase: \n");
    gets(s);
    printf("Voce digitou a frase \"%s\" \n", s);

    pulaPalavra(s);

    return 0;
}