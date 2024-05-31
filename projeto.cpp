#include <iostream>
#include "projeto.hpp"

projeto projeto::criaProjeto(){
    projeto novoProjeto;
    std::cout << "\nCriando novo projeto...\n";
    std::cin.ignore();
    std::cout << "Titulo: " <<std::endl;
    std::getline(std::cin,novoProjeto.tituloProjeto);
    std::cout << "Descricao: "<<std::endl;
    std::getline(std::cin, novoProjeto.descricaoProjeto); 

    return novoProjeto;
}

void projeto::listarProjetos(std::vector<projeto> projetos){
    if (projetos.empty()) {
        std::cout << "\nNao ha projetos para listar.\n";
        return;
    }

    std::cout << "\nLista de Projetos:\n";
    for (int i = 0, n = projetos.size(); i < n; i++) {
        std::cout << "\nProjeto " << i + 1 << ":\n";
        std::cout << "Titulo: " << projetos[i].tituloProjeto << std::endl;
        std::cout << "Descricao: " << projetos[i].descricaoProjeto << std::endl;
        std::cout << "Endereço: " << &projetos[i].tituloProjeto;
    }
}

