#include <iostream>
#include <string> 
#include <vector>
#ifndef BASE_HPP
#define BASE_HPP

class Base
{
protected:
    std::string titulo;
    std::string descricao;
    //std::tm data;

public:
    Base(std::string titulo, std::string descricao); //construtor
    //~Base(); //destrutor
    //void edita();
    virtual void imprimir(std::vector<Base*> vetorBase); //modificar
    virtual Base* cria() = 0; //definir
};

#endif