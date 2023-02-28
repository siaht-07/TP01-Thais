// TP01-Thais.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;

int main()
{
  
    string nome = "";
    int p1 = 0;
    int p2 = 0;
    int media = 0;

    cout << "Nome\n";
    cout << "===============\n";
    cin >> nome;
 

    cout << "Digite a nota da P1\n";
    cin >> p1;

        cout << "Digite a nota da P2\n";
        cin >> p2;

        media = (p1 + p2) / 2;

    if (media >= 6)
    {
        cout << "Aprovado\n";
    }
    else
    {
       cout << "Reprovado\n";
    }
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
