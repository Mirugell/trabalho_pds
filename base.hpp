#include <iostream>
#include <string> 
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
    virtual void imprimir(); //definir
    //virtual Base* cria() = 0; //definir
};



#endif