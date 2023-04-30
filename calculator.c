#include <stdio.h>
#include <locale.h>
#include <conio.h> // Biblioteca de caracteres

#define SOMA '1'
#define SUBTRACAO '2'
#define MULTIPLICACAO '3'
#define DIVISAO '4'


int main()
{
    // C�LCULO DE DOIS N�MEROS

    setlocale(LC_ALL, "portuguese");

    float x, y, soma, subtracao, multiplicacao, divisao;
    char c;

    printf("Bem vindo ao c�lculo de dois n�meros \n\n");

    printf("Digite o primeiro n�mero: ");
    scanf("%f", &x);
    printf("Digite o segundo n�mero: ");
    scanf("%f", &y);

    printf(" 1 - SOMAR \n 2 - SUBTRAIR \n 3 - MULTIPLICAR \n 4 - DIVIDIR \n\n");

    printf("Pressione de 1, 2, 3 ou 4 para continuar \n\n");
    c = getch(); //FUN��O PARA LER A TECLA PRESSIONADA

    if(c == SOMA){
        soma = x + y;
        printf("Tecla 1 pressionada\nRESULTADO --> � %0.2f\n\n\a", soma);
    }

    if(c == SUBTRACAO){
        subtracao = x - y;
        printf("Tecla 2 pressionada\nRESULTADO --> � %0.2f\n\n\a", subtracao);
    }

    if(c == MULTIPLICACAO){
        multiplicacao = x * y;
        printf("Tecla 3 pressionada\nRESULTADO --> � %0.2f\n\n\a", multiplicacao);
    }

    if(c == DIVISAO){
        divisao = x / y;
        printf("Tecla 4 pressionada\nRESULTADO --> � %0.2f\n\n\a", divisao);
    }


    return 0;
}
