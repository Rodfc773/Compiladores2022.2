#include <iostream>
#include <cstring>
#include <string>

int SI(std:: string cadeia, int pos);
int Sf(std:: string cadeia, int pos);

int main()
{
    std:: string cadeia;
    bool verificacao;
    getline(std:: cin, cadeia);

    if(SI(cadeia, 0))
    {
        std:: cout << "A cadeia digitida: " << cadeia << ", é válida !"<< std::endl;
    }
    else{
        std:: cout << "A cadeia digitida: " << cadeia << ", não é válida !"<< std::endl;
    }
    

    //std:: cout << "A cadeia digitida foi: " << cadeia << std::endl;
}

int SI(std:: string cadeia, int pos)
{
    if(cadeia[pos] == '1')
    {
        return Sf(cadeia, pos + 1);
    }
    else if (cadeia[pos] == '0')
    {
        return SI(cadeia, pos + 1);
    }
    else
    {
        return 0;
    }
    
}
int Sf(std:: string cadeia, int pos)
{
     if(cadeia[pos] == '1')
    {
        return Sf(cadeia, pos + 1);
    }
    else if (cadeia[pos] == '0')
    {
        return SI(cadeia, pos + 1);
    }
    else
    {
        return 1;
    }
}