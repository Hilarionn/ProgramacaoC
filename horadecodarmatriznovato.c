#include <stdio.h>


int main (){

int index;

char * NomesAlunos[3][3] = {

{"Aluno 0", "PT: 30", "MAT: 90",},
{"Aluno 1", "PT: 60", "MAT: 60",},
{"Aluno 2", "PT: 90", "MAT: 30"}
};


printf("Digite o número do aluno que queira ver as notas: \n");
printf("Para o Aluno 0 digite 0...\nPara o Aluno 1 digite 1...\nPara o Aluno 2 digite 2...\n");

    scanf("%d", &index);
    if(index < 0 || index > 2){
        printf("Opção inválida!\n");
    }
    else{
    printf("As notas do %s são: %s e %s ...\n", NomesAlunos[index][0], NomesAlunos[index][1], NomesAlunos[index][2]);
}







/*"O char * é um ponteiro que guarda o endereço de memória onde começa uma sequência de letras (string), permitindo armazenar nomes completos em vez de apenas um caractere."
Dica para o seu código: Use %s no printf para que o C siga esse endereço e imprima o nome inteiro até encontrar o sinal de fim (\0).*/


    return 0;
}