/*
c) Faça um programa que armazene em um registro de dados (estrutura composta) os da dos de um funcionário de uma empresa, 
compostos de: Nome, Idade, Sexo (M/F), CPF, Data de Nascimento, Código do Setor onde trabalha (0- 99),
 cargo que ocupa (string de até 30 caracteres) e Salário. 
Os dados devem ser digitados pelo usuário, armazenados na estrutura e exibidos na tela. Instruções:
*/
#include<stdio.h>
#include<string.h>

struct Funcionario
{
    char nome[50];
    char sexo;
    int idade;
    char CPF[15];
    char data_nasc[11];
    int cod_setor;
    char cargo[31];
    float salario;
};

int main()
{
    struct Funcionario f;

    printf("\nDigite o nome: ");
    scanf(" %[^\n]", &f.nome);

    printf("\nDigite o sexo (M/F): ");
    scanf(" %c", &f.sexo);

    printf("\nDigite a idade: ");
    scanf("%d", &f.idade);

    printf("\nDigite o CPF: ");
    scanf("%s", &f.CPF);

    printf("\nDigite a data de nascimento (dd/mm/aaaa): ");
    scanf("%s", &f.data_nasc);

    printf("\nDigite o codigo do setor (0-99): ");
    scanf("%d", &f.cod_setor);

    printf("\nDigite o cargo: ");
    scanf(" %[^\n]", &f.cargo);

    printf("\nDigite o salario: ");
    scanf("%f", &f.salario);

    printf("\n--- DADOS DO FUNCIONARIO ---\n");
    printf("\nNome: %s", f.nome);
    printf("\nSexo: %c", f.sexo);
    printf("\nIdade: %d", f.idade);
    printf("\nCPF: %s", f.CPF);
    printf("\nData de nascimento: %s", f.data_nasc);
    printf("\nCodigo do setor: %d", f.cod_setor);
    printf("Cargo: %s\n", f.cargo);
    printf("\nSalario: %.2f", f.salario);

    return 0;
}

