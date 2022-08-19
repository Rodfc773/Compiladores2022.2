#include <iostream>
#include <string>

void SI(std::string cadeia, int pos, bool &verify, int tam);
void S1(std:: string cadeia, int pos, bool &verify, int tam);
void Sf(std:: string cadeia, int pos, bool &verify, int tam);


int main(){

    std:: string cadeia_char;
    bool verify = false;


    std:: cin >> cadeia_char;
    int tam = cadeia_char.size();

    //std:: cout << "Endereçco de verify: " << &verify  << std:: endl;
    SI(cadeia_char, 0, verify, tam);

    if (verify)
    {
        std:: cout << "A Cadeia: " << cadeia_char << " , é válida!!" << std:: endl;
    }
    else{

        std:: cout << "A Cadeia: " << cadeia_char << " , não é válida!!" << std:: endl;

    }
    
    return 0;
}

void SI(std:: string cadeia, int pos, bool &verify, int tam){

    if(pos != tam){

        std:: cout << "letra em SI: " << cadeia[pos]  << std:: endl;


        if(cadeia[pos] == 'c'){

            S1(cadeia, pos + 1, verify, tam);
        }
        else  
        {
            SI(cadeia, pos + 1, verify, tam); 
        }
    }
}
void S1(std:: string cadeia, int pos,bool &verify, int tam){

    if(pos != tam){

        std:: cout << "letra em S1: " << cadeia[pos]  << std:: endl;


        if(cadeia[pos] == 'c'){


            verify = true;

            Sf(cadeia, pos + 1, verify, tam);
        }
        else if(cadeia[pos] == 'a' or cadeia[pos] == 'b'){
            verify = false;
            SI(cadeia, pos + 1, verify, tam);
        }
    }
    
}

void Sf(std:: string cadeia, int pos, bool &verify, int tam){

    if (pos != tam)
    {
        std:: cout << "letra em Sf: " << cadeia[pos]  << std:: endl;

        if ((cadeia[pos] == 'c' or cadeia[pos] == 'a') or cadeia[pos] =='b')
        {
            verify = true;
        }
        else{
            verify = false;
            return; 
        }
        Sf(cadeia, pos + 1, verify, tam);
    }
    
}

