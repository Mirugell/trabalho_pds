#include <iostream>
#include "tarefas.hpp"

void mostrarMenu();

int main(int argc, char const *argv[])
{
    std::vector<tarefas> vetorTarefas;
    std::vector<projeto> vetorProjetos;
    int opcao;
    tarefas tarefa;
    projeto projeto;

    do {
        mostrarMenu();
        std::cout << "Digite sua opcao: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1:
                vetorTarefas.push_back(tarefa.criaTarefa(vetorProjetos));
                break;
            case 2:
                tarefa.listarTarefas(vetorTarefas);
                break;
            case 3:
                vetorProjetos.push_back(projeto.criaProjeto());
                break;
            case 4:
                projeto.listarProjetos(vetorProjetos);
                break;
            case 5:
                std::cout << "\nSaindo do programa...\n";
                break;
            default:
                std::cout << "\nOpcao invalida. Tente novamente.\n";
        }
    } while (opcao != 5);

    return 0;
}
void mostrarMenu() {
    std::cout << "\n--- Gerenciador de Projetos ---\n";
    std::cout << "1. Criar Tarefa\n";
    std::cout << "2. Listar Tarefas\n";
    std::cout << "3. Criar Projeto\n";
    std::cout << "4. Listar projetos\n";
    std::cout << "5. Sair\n";
}

