#include <iostream>
using namespace std;

const int Limite = 10;
struct Pilha
{
    int elementos[Limite];
};
int Topo;
Pilha Matriz;

bool Vazia()
{
    if (Topo == 0)
        return true;
    else
        return false;
}

bool Cheia()
{
    if (Topo == Limite)
        return true;
    else
        return false;
}

bool Adicionar(int Elemento)
{
    if (Cheia())
        return false;
    else
    {
        Topo++;
        Matriz.elementos[Topo] =  Elemento;
        return true;
    }
}

bool Retirar()
{
    if (Vazia())
        return false;
    else
    {
        Matriz.elementos[Topo];
        Matriz.elementos[Topo] = 0;
        Topo--;
        return true;
    }
}

void Empilhar()
{
    int X;
    cout << "Entre o valor a ser inserido: "; cin >> X;

    if (Adicionar(X))
        cout << "O elemento " << X << " foi inserido na posicao " << Topo << endl;
    else
        cout << "Impossivel adicionar o elemento " << X << " - pilha cheia." << endl;
}

void Desempilhar()
{
    if (Retirar())
        cout << "O ultimo elemento da pilha foi retirado" << endl;
    else
        cout << "Impossivel retirar elementos - pilha vazia \n";
}

void Mostrar()
{
    int i;

    if (!Vazia())
    {
        for(i = Topo; i >= 1; i--)
            cout << "Posição: " << i << " = " << Matriz.elementos[i] << endl;
    }
    else
        cout << "Impossivel apresentar - pilha vazia" << endl;
}

void Criar(Pilha Matriz)
{
    int i;
    Topo = 0;

    for (i = 1; i < Limite; i++)
        Matriz.elementos[i] = 0;
}

int main(void)
{
    int Opcao;
    Criar(Matriz);

    while (Opcao != 5)
    {
        cout << "[1] - Empilhar" << endl;
        cout << "[2] - Desempilhar" << endl;
        cout << "[3] - Apresentar" << endl;
        cout << "[4] - Criar pilha" << endl;
        cout << "[5] - Sair" << endl;
        cout << "Escolha uma opcao: " << endl;

        cin >> Opcao;
        if (Opcao != 5)
        {
            switch (Opcao)
            {
                case 1: Empilhar();    break;
                case 2: Desempilhar(); break;
                case 3: Mostrar();     break;
                case 4: Criar(Matriz); break;
            }
        }
    }

    return 0;
}
