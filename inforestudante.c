#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Estudante{
    /* data */
    char nome [50];
    int idade;
    float media;
    char curso [40]; 
};

 int main (){
    system("clear");
    FILE *arquivo;
    struct Estudante estudande1;
    arquivo = fopen("estudante.txt", "w");
    if (arquivo == NULL){   
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    printf("Digite as informaçoes do estudante (nome,idade,media,curso):\n");

    while (1)   {
        printf ("Nome (ou 'sair' para encerrar: ");
        scanf("%s", estudande1.nome);

        if (strcmp(estudande1.nome, "sair") == 0) {
            break;
        }

        printf("Idade: ");
        scanf("%d", &estudande1.idade);

        printf("Media: ");
        scanf("%f", &estudande1.media);

        printf("Curso: ");
        scanf("%s", estudande1.curso);

       fprintf(arquivo, "%s %d %.2f %s\n", estudande1.nome, estudande1.idade, estudande1.media, estudande1.curso);
    }
    
    fclose(arquivo);
    arquivo = fopen("estudante.txt", "r");

    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
        printf("\nInformações dos estudantes salvas no arquivo:\n");

    while (fscanf(arquivo, "%s %d %f %s", estudande1.nome, &estudande1.idade, &estudande1.media, &estudande1.curso) != EOF){
        printf("Nome: %s, Idade: %d, Media: %.2f, Curso: %s\n", estudande1.nome, estudande1.idade, estudande1.media, estudande1.curso); 
    }

    fclose(arquivo);  
    return 0;
    
}


    