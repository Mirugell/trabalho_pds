#include <iostream>
#include "tarefas.hpp"

tarefas::tarefas(std::string titulo, std::string descricao, std::string status) : Base(titulo,descricao), statusTarefa(status){}

void tarefas::imprimir(){
    Base::imprimir();
    std::cout << "Status: " << this->statusTarefa << std::endl;
}

//tarefas tarefas::criaTarefa(std::vector<projeto>& projetos){
    //tarefas novaTarefa;
    //int numeroDoProjeto;
    //std::cout << "\nCriando nova tarefa...\n";
    //std::cin.ignore();
    //std::cout << "Titulo: " <<std::endl;
    //std::getline(std::cin,novaTarefa.tituloTarefa);
    //std::cout << "Descricao: "<<std::endl;
    //std::getline(std::cin, novaTarefa.descricaoTarefa); 
    //std::cout << "Status: "<<std::endl;
    //std::getline(std::cin, novaTarefa.statusTarefa);
    //std::cout << "Número do Projeto: " << std::endl;
    //std::cin >> numeroDoProjeto;
    //if (numeroDoProjeto-1 > projetos.size() || projetos.size()==0) //transformar isso aqui em variavel
    //{
        //std::cout << "Projeto inexistente" << std::endl;
        //novaTarefa.projetoTarefa->tituloProjeto="Não encontrado";
        //return novaTarefa;
    //}
    //else{
        //novaTarefa.projetoTarefa->tituloProjeto=projetos[numeroDoProjeto-1].tituloProjeto;
        //return novaTarefa;
    //} 
    //return novaTarefa;
//}

//int tarefas::editaTarefa(){
    //int n;
    //std::cout << "Edições possíveis:" << std::endl;
    //std::cout << "1. Excluir tarefa; 2. Editar status; 3. Editar descrição; 4. Editar título; 5. Editar projeto referente" << std::endl;
    //std::cin >> n; 
    //if (n==1)
    //{
        
    //}
    //else if (n==2)
    //{
        /* code */
    //}
    //else if (n==3)
    //{
        /* code */
    //}
    //else if (n==4)
    //{
        /* code */
    //}
    //else if (n==5)
    //{
        /* code */
    //}
    
    //return 0;
//}

//void tarefas::imprimir(std::vector<tarefas> tarefas){
    //if (tarefas.empty()) {
        //std::cout << "\nNao ha tarefas para listar.\n";
        //return;
    //}

    //std::cout << "\nLista de Tarefas:\n";
    //for (int i = 0, n = tarefas.size(); i < n; i++) {
        //std::cout << "\nTarefa " << i + 1 << ":\n";
        //std::cout << "Titulo: " << tarefas[i].tituloTarefa << std::endl;
        //std::cout << "Descricao: " << tarefas[i].descricaoTarefa << std::endl;
        //std::cout << "Status: " << tarefas[i].statusTarefa << std::endl;
        //std::cout << "Projeto: " << tarefas[i].projetoTarefa->tituloProjeto << std::endl;
    //}
//}