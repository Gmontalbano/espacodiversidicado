#include <iostream>
#include <string.h>

using namespace std;

class Pessoa
{
public:
    char nome[100];
    char cpf[20];
    int idade;
};

int getIdade(Pessoa pessoas[],const char* nome){
    int tam = sizeof(pessoas);
     for(int i = 0; i<tam; i++){
         if(strcmp(nome, pessoas[i].nome)==0)
            return pessoas[i].idade;
     }
     return -1;
}

int main(int argc, char *argv[]){
    Pessoa pessoas[3] = {
        {"Guilherme","123456654", 20},
        {"Manuela","321123456", 19},
        {"David", "654456123", 25},
    };

    cout << "Nome: " << pessoas[0].nome << endl;
    cout << "Nome: " << pessoas[1].nome << endl;
    cout << "Nome: " << pessoas[2].nome << endl;

    int idade = getIdade(pessoas, "Guilherme");

    if(idade != -1)
        cout << "Idade: " << idade << endl;
    else
        cout << "Pessoa não encontrada" << endl;


    return 10;
}
