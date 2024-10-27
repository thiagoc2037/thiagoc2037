#include <stdio.h>

typedef struct Data{
    int dia;
    int mes;
    int ano;
}Data;

struct Aluno{
    int id;
    Data nascimento;
};


int main () {

    //Criando um aluno
    struct Aluno aluno1;

    //Modificando valores
    aluno1.id = 15;
    aluno1.nascimento.ano = 1986;
    aluno1.nascimento.mes = 11;
    aluno1.nascimento.dia = 21;

    //Imprimindo valores
    printf("Nascido em: %d / %d / %d",  aluno1.nascimento.dia,  aluno1.nascimento.mes,  aluno1.nascimento.ano);

    return 0;
}
