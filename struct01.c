#include <stdio.h>
#include <stdlib.h>
int main()
{

    struct aluno
    {
    float nota[4];
    char nome[20];
    };
    struct aluno ALUNO;

    float media = 0;

    printf("Entre com os dados do aluno:\n");

    for(int i = 0; i < 4; i++)
    {
    printf("Nota [%i] ==>", i);
    scanf("%f", &ALUNO.nota[i]);
    fflush(stdin);
    }

    printf("\nNome do aluno:");
    fgets(ALUNO.nome, 20, stdin);
    fflush(stdin);

    for(int i = 0; i < 4; i++)
    {
        media += ALUNO.nota[i];
    }

    media = media/4;

    printf("\nMedia do aluno ==> %.2f  Nome do Aluno ==> %s\n", media, ALUNO.nome);


return 0;
}
