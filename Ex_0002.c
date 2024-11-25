#include <stdio.h>
#include <stdlib.h>

int busca(int vetor[], int inicio, int fim, int teste) {
    
    if (inicio > fim) {
        return -1; 
    }

    int meio = (inicio + fim) / 2;
    
    if (vetor[meio] == teste) {
        return meio; 
    } else if (teste < vetor[meio]) {
        return busca(vetor, inicio, meio - 1, teste); 
    } else {
        return busca(vetor, meio + 1, fim, teste); 
    }
    
}


void imprime(int resultado) {
    if (resultado != -1) {
        printf("Numero encontrado no índice: %d\n", resultado);
    } else {
        printf("Numero não encontrado\n");
    }
}

int main() {
    int vetor[6] = {10, 20, 30, 40, 50, 60};
    int num;

    printf("Informe um numero:\n");
    scanf("%d", &num);

    
    int resultado = busca(vetor, 0, 5, num);

    
    imprime(resultado);

    return 0;
}
