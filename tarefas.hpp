#include <iostream>
#include <string>
#include <vector>
#include "projeto.hpp"
#ifndef TAREFAS_HPP
#define TAREFAS_HPP

class tarefas
{
private:
    std::string tituloTarefa;
    std::string descricaoTarefa;
    std::string statusTarefa;
public:
    int editaTarefa();
    tarefas criaTarefa();
    void listarTarefas(std::vector<tarefas> tarefas);
};

#endif