#include <stdio.h>

int main() {
    int Num,aux=1;
    printf("Informe o número que deseja buscar na Sequência de Fibonacci: ");
    scanf("%d", &Num);
    for(int i=0;i<=Num;){
        if(Num==i){
            printf("%d está na Sequência de Fibonacci", Num);
            return 0;
        }
        i = i+aux;
        aux = i - aux;
    }
    printf("%d não está na Sequência de Fibonacci", Num);
    return 0;
}