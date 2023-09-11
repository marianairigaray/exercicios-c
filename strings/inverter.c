#include <stdio.h>
#include <stdlib.h>

/*
1. Escrever um programa que lê uma string e a escreve. Através de uma função, escrever a mesma string em ordem inversa.
*/

int TamString(char str[]){
    int x=0;
    while(str[x]!='\0'){
        x++;
    }
    return x;
}

void inverse(char str[]){
    int TamStr = TamString(str);
    for(int b = 0; b<TamStr/2; b++){
        char temp = str[b];

        str[b]=str[TamStr-b-1];
        str[TamStr-b-1] = temp;
    }
    printf("\nO inverso da frase: \"%s\" \n", str);
}

int main()
{

    char s[30];
    char InverStr;

    printf("Digite uma frase: \n");
    gets(s);
    printf("Voce digitou a frase \"%s\" \n", s);

    inverse(s);

    return 0;
}