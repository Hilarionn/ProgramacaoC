#include <stdio.h>
int main (){
/*Conhecendo a estrutura FOR
o Whilhe e Do While sempre vai executar ENQUANTO a condição for algo, o FOR sempre vai ter uma finalidade específica.
O For tem uma estrutura diferente dos loops, ele precisa de: NOME DA ESTRUTURA
=====(Inicialização;condição;incremento)=====
{código}
A inicialização define o valor da variável, a condição é booleana ainda.
Na prática, a inicialização vai ser feita apenas uma vez
A condição vai ser em toda a execução, terá um loop em condição e incremento, toda vez que a condição for verdadeira, faz o código e incrementa
loop.*/
for (int i = 1; i <= 5; i++) {
    printf("%d\n", i);

    //A variável iniciada dentro do FOR só pode ser usada dentro do FOR. Caso queira que ela seja usada em todo o contexto, inicializar ela fora do bloco.
//Pode ser incremento ou decremento

}





    return 0;
}