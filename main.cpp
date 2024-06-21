#include <iostream>
#include "tarefas.hpp"

void mostrarMenu();

int main(int argc, char const *argv[])
{

    //std::string titulo, descricao, status;

    //std::cout << "Insira o título: ";
    //std::getline(std::cin, titulo);

    //std::cout << "Insira o status: ";
    //std::getline(std::cin, status);

    //std::cout << "Insira a descrição: ";
    //std::getline(std::cin, descricao);

    //tarefas tarefa(titulo, descricao, status);

    Base* nova_tarefa = new tarefas("Título", "Descrição", "Status");
    //nova_tarefa = nova_tarefa->cria();

    // Utiliza o objeto criado
    

    // Libera a memória alocada dinamicamente
    //delete nova_tarefa;

    std::vector<Base*> vetorBase;

   
    
    //std::vector<tarefas> vetorTarefas;
    //std::vector<projeto> vetorProjetos;
    int opcao;
    //tarefas tarefa;
    //projeto projeto;

    do {
        mostrarMenu();
        std::cout << "Digite sua opcao: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1:
                vetorBase.push_back(nova_tarefa->cria());
                break;
            case 2:
                nova_tarefa->imprimir(vetorBase);
                break;
            // case 3:
            //     vetorProjetos.push_back(projeto.criaProjeto());
            //     break;
            //case 4:
                //projeto.listarProjetos(vetorProjetos);
                //break;
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
    //std::cout << "3. Criar Projeto\n";
    //std::cout << "4. Listar projetos\n";
    std::cout << "5. Sair\n";
}

