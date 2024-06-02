#include <iostream>
#include <string>
#include <vector>
#ifndef PROJETO_HPP
#define PROJETO_HPP

class projeto
{
private:
    std::string descricaoProjeto; 

public:
    std::string tituloProjeto;
    //projeto criaProjeto();
    void listarProjetos(std::vector<projeto> projetos);
    //projeto editaProjeto();
};

#endif