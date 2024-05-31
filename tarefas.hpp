#include <iostream>
#include "projeto.hpp"
#ifndef TAREFAS_HPP
#define TAREFAS_HPP

class tarefas
{
private:
    std::string tituloTarefa;
    std::string descricaoTarefa;
    std::string statusTarefa;
    projeto* projetoTarefa;

public:
    int editaTarefa();
    tarefas criaTarefa(std::vector<projeto>& projetos);
    void listarTarefas(std::vector<tarefas> tarefas);
};

#endif