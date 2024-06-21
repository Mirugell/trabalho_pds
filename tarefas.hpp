#include <iostream>
#include "projeto.hpp"
#include "base.hpp"
#ifndef TAREFAS_HPP
#define TAREFAS_HPP
//class projeto; 

class tarefas : public Base
{
private:
    //projeto* projetoTarefa;

public:
    std::string statusTarefa;
    tarefas(std::string titulo, std::string descricao, std::string status);
    //~tarefas();

    virtual void imprimir(std::vector<Base*> vetorBase) override;
    virtual Base* cria() override;

};


#endif

