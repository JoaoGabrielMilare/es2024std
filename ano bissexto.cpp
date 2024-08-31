#include <stdio.h>

int main() {
    int ano;
    char nome[99];

    printf("Digite o seu nome: ");
    scanf("%s", nome); 

    printf("Digite o ano que voce nasceu: ");
    scanf("%d", &ano);

    if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) {
        printf("Ola %s, seu ano e bissexto.\n", nome);
    } else {
        printf("Ola %s, voce nao nasceu em ano bissexto.\n", nome);
    }
    return 0;
}
