#include <string>
#include <iostream>
#pragma once

struct Pilha
{
    std::string cadeia;
    Pilha *prox;
};
Pilha *Empilhar(Pilha *head, std :: string cadeia);
Pilha *Desempilhar(Pilha *head);