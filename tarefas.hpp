#include <iostream>
#include <string>
#include <vector>
#include "projeto.hpp"

class tarefas
{
private:
    std::string tituloTarefa;
    std::string descricaoTarefa;
    std::string statusTarefa;
    projeto* projetoTarefa; 
    
public:
    void editaTarefa();

};
