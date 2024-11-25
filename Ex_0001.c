#include <stdio.h>
#include <stdlib.h>

int busca(int teste){
    int vetor[6]={10,20,30,40,50,60};
    for(int i=0; i<6;i++){
        if(teste == vetor[i]){
            return i;
        }
    }
    return -1;
}

void print(int resultado){
    if(resultado != -1){
        printf("Numero encontrado no indice: %d\n", resultado);
    }
    else{
        printf("Numero nao encontrado.\n");
    }
}
int main(){
    int num;
    printf("Informe o numero que deseja buscar:\n");
    scanf("%d", &num);

    busca(num);

    int resultado = busca(num);
    print(resultado);

    return 0;
}