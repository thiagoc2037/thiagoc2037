
#include <stdio.h>
#include <stdlib.h>

//Definindo que a fun��o existe
int retornaDezEImprimeMensagem();
float retornaQuebrado();

int main(){

    //Definindo Vari�veis
    int a;

    //Passando o retorno de uma fun��o para uma vari�vel
    a = retornaDezEImprimeMensagem();

    //Imprimindo valor de a
    printf("\n%d", a);

    //Definindo um float
    float b;

    //Passando o retorno de uma fun��o para uma vari�vel
    b = retornaQuebrado();

    //Imprimindo valor de b
    printf("\n%f", b);

    return 0;
}

//Fun��o que retorna 10 e imprime uma mensagem
int retornaDezEImprimeMensagem(){
    printf("\nOi galera! \n");
    int numero = 10;
    return numero;
}

//Retorna um n�mero quebrado
float retornaQuebrado(){
    return 5.5;
}

