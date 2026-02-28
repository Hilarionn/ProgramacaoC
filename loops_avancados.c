#include <stdio.h>

// =========================
// Triângulo de letras
// =========================
/* void trianguloLetras() {
    char letra;
    int i, j;

    for (i = 1; i <= 5; i++) {
        letra = 'E';
        for (j = 1; j <= i; j++) {
            printf("%c", letra);
            letra--;
        }
        printf("\n");
    }
}

// =========================
// Loop duplo
// =========================
void loopDuplo() {
    for (int i = 0, j = 10; i < j; i++, j--) {
        printf(" I - %d, J - %d\n", i, j);
    }
}

// =========================
// Operador ternário
// =========================
void loopTernario() {
    for (int i = 0;
         i < 100;
         i += (i % 2 == 0) ? 1 : 2)
    {
        printf("%d ", i);
    }
}

// =========================
// Função já existente
// =========================
void imprimirmensagem() {
    printf("Olá, Mundo!\nEssa técnica também pode dividir os loops, mas é uma estrutura complexa.\n");
}

void recursiveloop (int n) {
if (n > 0 ) {
    printf("%d\n", n);
    recursiveloop (n-1);
}
}
*/

/*
==================== ENTENDIMENTO DA RECURSÃO ====================

A recursão funciona como blocos empilhados na memória (STACK).

Quando eu chamo:

recursivo(3);

Acontece isso:

DESCIDA (empilhando chamadas):

recursivo(3)
    ↓ chama recursivo(2)
        ↓ chama recursivo(1)
            ↓ chama recursivo(0)
                ↓ para (0 não entra no if)

Visual da pilha:

Topo da pilha
-------------
recursivo(0)
recursivo(1)
recursivo(2)
recursivo(3)
-------------
Base

Cada bloco fica esperando o de baixo terminar.
O printf NÃO executa na descida se ele estiver depois da chamada recursiva.
Ele fica "pausado".

==============================================================

SUBIDA (desempilhando chamadas):

recursivo(0) termina
↑ volta para recursivo(1) → printf(1)
↑ volta para recursivo(2) → printf(2)
↑ volta para recursivo(3) → printf(3)

Ordem real dos prints:
(1)
(2)
(3)

==============================================================

Se o printf estivesse ANTES da chamada:

printf(numero);
recursivo(numero - 1);

A execução seria:

(3)
(2)
(1)

Porque o print executaria na DESCIDA.

==============================================================

REGRA DE OURO:

Código ANTES da chamada recursiva → executa na descida.
Código DEPOIS da chamada recursiva → executa na subida.

Isso não é fila (FIFO).
É PILHA (LIFO - Last In, First Out).

O último bloco que entra é o primeiro que sai.

A recursão empilha chamadas até atingir a condição de parada,
depois desempilha executando o que ficou pendente.
================================================================
*/ 

void recursivo(int numero){
    if (numero > 0){
         //printf("%d\n", numero);
        recursivo(numero - 1);
        printf("%d\n", numero);
    }
}
int main() {

    //int numero = 5;
   // printf("Contagem regressiva: \n");
  //  recursiveloop(numero);
   // imprimirmensagem();
   // trianguloLetras();
   // loopDuplo();
  //  loopTernario();
recursivo(5);


    return 0;
}