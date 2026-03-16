#include <stdio.h>
#include <stdlib.h>
#define A 10

int main()
{
    int i, i_n1_maior[A], i_n2_maior[A], i_n3_maior[A], i_media_maior[A], i_m_menor[A], cont1_n1=0, cont2_n2=0, cont3_n3=0, cont_media=0, cont_m=0;
    float n1_maior=-1, n1_atual=0, n1_anterior=0, n2_maior=-1, n2_atual=0, n2_anterior=0, n3_maior=-1, n3_atual=0, n3_anterior=0, media_maior=-1, media_atual=0, media_anterior=0, m_menor=11, m_atual=0, m_anterior=0;

    struct dados{
        int matricula;
        float n1, n2, n3;
        char nome[30];
        float media;
    }aluno[A];

    for(i=0; i<A; i++){
        printf("Digite o nome %i: \n", i+1);
        gets(aluno[i].nome);
        printf("Digite a matricula %i: \n", i+1);
        scanf("%i", &aluno[i].matricula);
        printf("Digite a primeira nota: \n");
        scanf("%f", &aluno[i].n1);
        printf("Digite a segunda nota: \n");
        scanf("%f", &aluno[i].n2);
        printf("Digite a terceira nota: \n");
        scanf("%f", &aluno[i].n3);
        fflush(stdin);
        aluno[i].media = (aluno[i].n1 + aluno[i].n2 + aluno[i].n3)/3;
    }


    printf("\n\n");

    //ALUNO COM NOTA MAIOR NA PRIMEIRA PROVA
    for(i=0; i<A; i++){
        if(aluno[i].n1>=n1_maior){
            n1_maior = aluno[i].n1;
            n1_atual = n1_maior;
            if(n1_atual != n1_anterior){
                cont1_n1 = 0;
                n1_anterior = n1_atual;
            }
            i_n1_maior[cont1_n1] = i;
            cont1_n1++;
        }
    }
    for(i=0; i<cont1_n1; i++){
        printf("O aluno %s com matricula %i tem a maior n1= %.1f\n", aluno[i_n1_maior[i]].nome, aluno[i_n1_maior[i]].matricula, aluno[i_n1_maior[i]].n1);
    }

    //ALUNO COM NOTA MAIOR NA SEGUNDA PROVA
    for(i=0; i<A; i++){
        if(aluno[i].n2>=n2_maior){
            n2_maior = aluno[i].n2;
            n2_atual = n2_maior;
            if(n2_atual != n2_anterior){
                cont2_n2 = 0;
                n2_anterior = n2_atual;
            }
            i_n2_maior[cont2_n2] = i;
            cont2_n2++;
        }
    }
    for(i=0; i<cont2_n2; i++){
        printf("O aluno %s com matricula %i tem a maior n2= %.1f\n", aluno[i_n2_maior[i]].nome, aluno[i_n2_maior[i]].matricula, aluno[i_n2_maior[i]].n2);
    }

    //ALUNO COM NOTA MAIOR NA TERCEIRA PROVA
    for(i=0; i<A; i++){
        if(aluno[i].n3>=n3_maior){
            n3_maior = aluno[i].n3;
            n3_atual = n3_maior;
            if(n3_atual != n3_anterior){
                cont3_n3 = 0;
                n3_anterior = n3_atual;
            }
            i_n3_maior[cont3_n3] = i;
            cont3_n3++;
        }
    }
    for(i=0; i<cont3_n3; i++){
        printf("O aluno %s com matricula %i tem a maior n3= %.1f\n", aluno[i_n3_maior[i]].nome, aluno[i_n3_maior[i]].matricula, aluno[i_n3_maior[i]].n3);
    }

    printf("\n\n");

    //ALUNO COM MAIOR MEDIA GERAL
    for(i=0; i<A; i++){
        if(aluno[i].media>=media_maior){
            media_maior = aluno[i].media;
            media_atual = media_maior;
            if(media_atual != media_anterior){
                cont_media = 0;
                media_anterior = media_atual;
            }
            i_media_maior[cont_media] = i;
            cont_media++;
        }
    }
    for(i=0; i<cont_media; i++){
        printf("O aluno %s com n1 = %.1f, n2 = %.1f e n3 = %.1f tem maior media geral = %.1f\n", aluno[i_media_maior[i]].nome, aluno[i_media_maior[i]].n1, aluno[i_media_maior[i]].n2, aluno[i_media_maior[i]].n3, aluno[i_media_maior[i]].media);
    }

    //ALUNO COM MENOR MEDIA GERAL
    for(i=0; i<A; i++){
        if(aluno[i].media<=m_menor){
            m_menor = aluno[i].media;
            m_atual = m_menor;
            if(m_atual != m_anterior){
                cont_m = 0;
                m_anterior = m_atual;
            }
            i_m_menor[cont_m] = i;
            cont_m++;
        }
    }
    for(i=0; i<cont_m; i++){
        printf("O aluno %s com n1 = %.1f, n2 = %.1f e n3 = %.1f tem menor media geral = %.1f\n", aluno[i_m_menor[i]].nome, aluno[i_m_menor[i]].n1, aluno[i_m_menor[i]].n2, aluno[i_m_menor[i]].n3, aluno[i_m_menor[i]].media);
    }

    printf("\n\n");

    //COMPARA MEDIA E DIZ SE O ALUNO FOI APROVADO OU REPROVADO
        for(i=0; i<A; i++){

        if(aluno[i].media>=6){
            printf("O Aluno %s com media = %.1f foi Aprovado!\n", aluno[i].nome, aluno[i].media);
        }else{
            printf("O Aluno %s com media = %.1f foi Reprovado!\n", aluno[i].nome, aluno[i].media);
        }
    }

    return 0;
}
