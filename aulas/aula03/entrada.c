#include <stdio.h>

int main() {
    char tecla_pressionada;
    printf("Pressione uma Tecla:");
    scanf("%c", &tecla_pressionada);
    while(getchar() !='\n'); //limpar o buffer (memória recente)
    printf("Você pressionaou a tecla '%C'\n", tecla_pressionada);

    int idade;
    printf("Informe sua idade: ");
    scanf("%i", &idade);
    while(getchar() !='\n');
    printf("Você tem %i anos\n", idade);


    float preco;
    printf("Informe o preço da gasolina: ");
    scanf("%f", &preco);
    while(getchar() !='\n');
    printf("O preco da gasolina eh R$ %.2f\n", preco);
    return 0;

    

}

    