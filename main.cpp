#include <iostream>
#include <vector>
#include <string>
#include "tarefas.hpp"

void mostrarMenu() {
    std::cout << "\n--- Gerenciador de Projetos ---\n";
    std::cout << "1. Criar Tarefa\n";
    std::cout << "2. Listar Tarefas\n";
    std::cout << "3. Sair\n";
}

int main(int argc, char const *argv[])
{
    std::vector<tarefas> vetorTarefas;
    int opcao;
    tarefas tarefa;

    do {
        mostrarMenu();
        std::cout << "Digite sua opcao: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1:
                vetorTarefas.push_back(tarefa.criaTarefa());
                break;
            case 2:
                tarefa.listarTarefas(vetorTarefas);
                break;
            case 3:
                std::cout << "\nSaindo do programa...\n";
                break;
            default:
                std::cout << "\nOpcao invalida. Tente novamente.\n";
        }
    } while (opcao != 3);

    return 0;
}


