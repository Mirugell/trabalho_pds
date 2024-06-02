#include <iostream>
#include "projeto.hpp"
#include "base.hpp"
#ifndef TAREFAS_HPP
#define TAREFAS_HPP
//class projeto; 

class tarefas : public Base
{
private:
    std::string statusTarefa;
    //projeto* projetoTarefa;

public:
    tarefas(std::string titulo, std::string descricao, std::string status);
    //~tarefas();

    virtual void imprimir() override;

};


#endif

