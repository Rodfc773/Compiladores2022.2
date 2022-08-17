#include <iostream>
#include <cstring>
#include <string>
#include "Pilha/Pilha.h"


void SIf(std:: string cadeia, int &contador, int pos, Pilha *head);
void S1(std:: string cadeia, int &contador, int pos, Pilha *head);

int main()
{
    Pilha *head = NULL;

    int contador = 0;
    std:: string cadeia;

    std::getline(std:: cin,cadeia);

    if (cadeia[0] == ')')
    {
        std::cout << "Cadeia Inválida" << std:: endl;
    }
    else
    {
        SIf(cadeia, contador, 0, head);

        contador == 0 ? std::cout << "Cadeia: " << cadeia << " , é válida!" << std:: endl : std::cout << "Cadeia: " << cadeia << " , não é válida!" << std:: endl;
    }
    

}

void SIf(std:: string cadeia, int &contador, int pos, Pilha *head)
{
    if(cadeia[pos] == '(')
    {
        contador += 1;
        head = Empilhar(head, cadeia);
        S1(cadeia, contador, pos + 1, head);
    }
    else if (cadeia[pos] == ')')
    {
        contador -= 1;
        head = Desempilhar(head);
        SIf(cadeia, contador, pos + 1, head);
    }
}
void S1(std:: string cadeia, int &contador, int pos, Pilha *head)
{
     if(cadeia[pos] == '(')
    {
        contador += 1;
        head = Empilhar(head, cadeia);
        S1(cadeia, contador, pos + 1, head);
    }
    else if (cadeia[pos] == ')')
    {
        contador -= 1;
        head = Desempilhar(head);
        SIf(cadeia, contador, pos + 1, head);
    }
}
