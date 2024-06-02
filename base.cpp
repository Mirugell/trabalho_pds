#include <iostream>
#include "base.hpp"

Base::Base(std::string titulo, std::string descricao) : titulo(titulo), descricao(descricao){}

void Base::imprimir(){
    std::cout << "Título: " << this->titulo << std::endl;
    std::cout << "Descrição: " << this->descricao << std::endl;
}
