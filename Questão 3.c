#include <stdio.h>

int main() {
    int indice=12,soma=0,k=1;
    while(k<indice){
        k = k + 1;
        soma = soma + k;
    }
    printf("%d", soma);
    return 0;
}