#include <iostream>
#include "base.hpp"

Base::Base(std::string titulo, std::string descricao) : titulo(titulo), descricao(descricao){}

void Base::imprimir(std::vector<Base*> vetorBase){
    for (int i = 0, n=vetorBase.size(); i < n; i++)
    {
        std::cout << "Título: " << vetorBase[i]->titulo << std::endl;
        std::cout << "Descrição: " << vetorBase[i]->descricao <<std::endl;
    }
}
