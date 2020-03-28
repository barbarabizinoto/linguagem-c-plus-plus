#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstring>
using namespace std;

const int MAX = 4;

struct CAD_CONTATOS
{
    char NOME[40];
    char ENDERECO[40];
    char TELEFONE[15];
};

CAD_CONTATOS CONTATOS[MAX], X;
int I, J, COMECO, MEIO, FINAL;
char LETRA, PESQ[40];
bool ACHA;

void limparteclado(void);
void cadastrar(void);
void pesquisa(void);
void pesquisar(void);
void alterar(void);
bool cheio(void);
void pausa(void);

int main(void)
{
    int OPCAO = 0;
    while (OPCAO != 4)
    {
        cout << "---------------------------------------------------------------------------------" << endl;
        cout << "                                      AGENDA                                     " << endl;
        cout << "                                  MENU PRINCIPAL                                 " << endl;
        cout << "---------------------------------------------------------------------------------" << endl;
        cout << "\n";
        cout << "Numero de contatos salvos: " << FINAL << endl << endl;
        cout << "[1] - CADASTRAR" << endl;
        cout << "[2] - PESQUISAR" << endl;
        cout << "[3] - APRESENTAR TODOS OS CADASTROS" << endl;
        cout << "[4] - SAIR" << endl;
        cout << endl;
        cout << "Escolha uma opcao: "; cin >> OPCAO;
        limparteclado();
        cout << endl;
        if (OPCAO != 4)
        {
            switch (OPCAO)
            {
                case 1: cadastrar(); break;
                case 2: pesquisar(); break;
                case 3: alterar(); break;
                default: cout << "Opcao invalida.\n"; break;
            }
        }
    }

    return 0;
}

void limparteclado(void)
{
  cin.ignore(100 , '\n');
}

void cadastrar(void)
{
    cout << "--------------------------------CADASTRO DE CONTATOS-----------------------------" << endl << endl;
    if (cheio())
        cout << "A agenda esta lotada" << endl << endl;
    else
    {
        cout << "    Nome: "; cin.getline(CONTATOS[FINAL].NOME, sizeof(CONTATOS[FINAL].NOME));
        cout << "Endereco: "; cin.getline(CONTATOS[FINAL].ENDERECO, sizeof(CONTATOS[FINAL].ENDERECO));
        cout << "Telefone: "; cin.getline(CONTATOS[FINAL].TELEFONE, sizeof(CONTATOS[FINAL].TELEFONE));
        FINAL++;
        cout << endl;
    }


    for (I = 0; I <= FINAL - 2; I++)
    {
        for (J = I + 1; J <= FINAL - 1; J++)
        {
            if (strcmp(CONTATOS[I].NOME, CONTATOS[J].NOME) > 0)
            {
                X = CONTATOS[I];
                CONTATOS[I] = CONTATOS[J];
                CONTATOS[J] = X;
            }
        }
    }

    pausa();
    return;
}

bool pesquisa(char PESQ[41])
{
    COMECO = 0;
    MEIO = 0;
    FINAL = MAX - 1;
    ACHA = false;
    while (COMECO <= FINAL and ACHA == false)
    {
        MEIO = (COMECO + FINAL) / 2;
        if (strcmp(PESQ, CONTATOS[MEIO].NOME) == 0)
            ACHA = true;
        else if (strcmp(PESQ, CONTATOS[MEIO].NOME) < 0)
            FINAL = MEIO - 1;
        else
            COMECO = MEIO + 1;
    }
    if (ACHA == true)
        return true;
    else
        return false;
    limparteclado();
}

void pesquisar(void)
{
    do
    {
        cout << "\nInsira o nome do contato a ser pesquisado: "; cin.getline(PESQ, sizeof(PESQ));
        if (pesquisa(PESQ))
        {
            cout<< "    Nome: " << CONTATOS[MEIO].NOME << endl;
            cout<< "Telefone: " << CONTATOS[MEIO].TELEFONE << endl;
            cout<< "Endereco: " << CONTATOS[MEIO].ENDERECO << endl;

            cout << endl;
        }
        else
            cout << "\nContato nao localizado" << endl;
        cout << "\nDeseja pesquisar outro contato? [S]/[N] + <ENTER>:" ; cin >> LETRA;
        LETRA = toupper(LETRA);
        limparteclado();
    }
    while (LETRA == 'S');
}

void alterar(void)
{
    cout << "\nInsira o nome do contato a ser alterado: "; cin.getline(PESQ, sizeof(PESQ));
    if (pesquisa(PESQ))
    {
        cout << "    Nome: "; cin >> CONTATOS[MEIO].NOME;
        cout << "Endereco: "; cin >> CONTATOS[MEIO].ENDERECO;
        cout << "Telefone: "; cin >> CONTATOS[MEIO].TELEFONE;
    }
    else
        cout << "\nContato nao localizado" << endl;

    pausa();
    return;
}

bool cheio(void)
{
  if(FINAL + 1 > MAX)
    return true;
  else
    return false;
}

void pausa(void)
{
    cout << "Tecle <V> + <ENTER> para voltar ao MENU PRINCIPAL: ";
    do
    {
        LETRA = cin.get();
        LETRA = toupper(LETRA);
    }
    while (LETRA != 'V');

    return;
}
