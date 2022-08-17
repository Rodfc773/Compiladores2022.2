#include <iostream>
#include <cstring>
#include <string>
#include <stdlib.h>
#include "Pilha.h"

Pilha *Empilhar(Pilha *head, std::string cadeia)
{
    if (head == NULL)
    {
        head = (Pilha*)malloc(sizeof(Pilha));
        head->cadeia = cadeia;
        head->prox = NULL;

        return head;

    }
    else{

        Pilha *aux = head, *novo;

        while (aux->prox != NULL)
        {
            aux = aux->prox;
        }

        novo = (Pilha*)malloc(sizeof(Pilha));
        novo->prox = NULL;
        novo->cadeia = cadeia;

        aux->prox = novo;

        return head;
    }
}
Pilha *Desempilhar(Pilha *head)
{

    if (head->prox == NULL)
    {
        free(head);
        return NULL;
    }
    
    Pilha *aux = head, *anterior;

    while (aux->prox != NULL)
    {
        anterior = aux;
        aux = aux->prox;
    }
    
    anterior->prox = NULL;
    free(aux);

    return head;
    
}