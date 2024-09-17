#include <stdio.h>

int main() {
    char word[100], caracter;
    int repeat = 0;
    printf("Informe a palavra: ");
    scanf("%s", word);
    printf("Informe a letra que deseja buscar: ");
    scanf(" %c", &caracter);
    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] == caracter) {
            repeat++;
        }
    }
    printf("A letra %c aparece na palavra %s %d vezes\n", caracter,word, repeat);
    return 0;
}