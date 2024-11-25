#include <stdio.h>
#include <stdlib.h>

struct NOH{
    int number;
    struct NOH* next;
};

void inserir(struct NOH** lista, int new_number){
    struct NOH* no = (struct NOH*)malloc(sizeof(struct NOH));
    no -> number = new_number;
    no -> next = *lista;
    *lista = no;

}

void imprime(struct NOH* no){
    while(no != NULL){
        printf("%d -> ", no -> number);
        no = no -> next;
    }
    printf ("NULL\n");
}
int main(){

    struct NOH* no = NULL;
    inserir (&no, 1);
    inserir (&no, 2);
    inserir (&no, 3);

    imprime(no);
    return 0;
}