#include <stdio.h>
#include <stdlib.h>

int busca(int vetor[], int inicio, int fim, int teste){
    int meio;

     while(inicio <= fim){

        meio = (inicio + fim)/2;

        if(vetor[meio] == teste){
            return meio;
        }
        else if(vetor[meio] > teste){
            fim = meio -1;
        }
        else if(vetor[meio] < teste){
            inicio = meio + 1;
        }
    }
    return -1;
}

void imprime(int resultado){
    if(resultado != -1){
        printf("Numero encontrado no indice: %d\n", resultado);
    }
    else{
        printf("Numero nao encontrado\n");
    }
}

int main(){
    int num;
    int vetor[6]={10,20,30,40,50,60};

    printf("Informe um numero\n");
    scanf("%d", &num);

    int resultado = busca(vetor, 0, 5, num);
    imprime(resultado);
    return 0;
}