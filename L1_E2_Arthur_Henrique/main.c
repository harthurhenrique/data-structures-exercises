#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Funcionario{
    char nome [30];
    int idade;
    char sexo;
    char cpf [12];
    char dt_nasc [11];
    int cod;
    char cargo [30];
    float sal;
};

int main() {

    struct Funcionario funcionario;

    printf("Nome do funcionario:\n");
    scanf("%[^\n]", &funcionario.nome);
    printf("Idade do funcionario:\n");
    scanf("%d", &funcionario.idade);
    setbuf(stdin, NULL);
    printf("Sexo do funcionario [M/F]:\n");
    scanf("%c", &funcionario.sexo);
    setbuf(stdin, NULL);
    printf("CPF do funcionario:\n");
    scanf("%[^\n]", &funcionario.cpf);
    setbuf(stdin, NULL);
    printf("Data de nascimento [**/**/****]:\n");
    scanf("%[^\n]", &funcionario.dt_nasc);
    printf("Codigo do setor:\n");
    scanf("%d", &funcionario.cod);
    setbuf(stdin, NULL);
    printf("Cargo do funcionario:\n");
    fgets(funcionario.cargo,30,stdin);
    printf("Salario do funcionario:\n");
    scanf("%f", &funcionario.sal);

    printf("\n#######################\n");
    setbuf(stdin, NULL);
    printf("Nome: %s\n", funcionario.nome);
    printf("Idade: %d anos\n", funcionario.idade);
    if(funcionario.sexo == 'M'){
        printf("Sexo: Masculino\n");
    }
    else if(funcionario.sexo == 'F'){
        printf("Sexo: Feminino\n");
    }
    setbuf(stdin, NULL);
    printf("CPF: %s\n", funcionario.cpf);
    setbuf(stdin, NULL);
    printf("Data de nascimento: %s\n", funcionario.dt_nasc);
    setbuf(stdin, NULL);
    printf("Codigo do setor: %d\n", funcionario.cod);
    setbuf(stdin, NULL);
    printf("Cargo: %s", funcionario.cargo);
    printf("Salario: R$ %.2f\n", funcionario.sal);
    printf("#######################");


    return 0;
}
