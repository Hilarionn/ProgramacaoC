#include <stdio.h>


    //Definindo a struct para Aluno
typedef struct{
    char nome[60];
    int idade;
    float media;
}  Aluno;


int main () {
//Criando e inicializando uma variável do tipo aluno

Aluno aluno1 = {"João", 20, 8.5};
Aluno aluno2 = {"Marcelo", 2002, 8.77};

//Acessando os dados como operador

printf("Aluno: %s\n", aluno1.nome);
printf("Idade: %d\n", aluno1.idade);
printf("Média: %.2f\n", aluno1.media);

printf("Aluno 2 tem: %s, %d, %.2f\n", aluno2.nome, aluno2.idade, aluno2.media);



    return 0;
}