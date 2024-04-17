#include <iostream>
#include <string>
#include <fstream>
#include "produtos.hpp"



int main(){
    
    //Executavel
    PRODUTO produto0;
    produto0.ler_arquivo();                     //CATALOGAR OS PRODUTOS
    produto0.organizar_vetores();


    std::cout<<"Seja bem vindo(a) a nossa loja"<<std::endl;
    std::cout<<"Primeiramente, que tipo de produto voce busca?"<<std::endl;
    std::cout<<"[1]Eletrodomesticos,[2]Moveis,[3]Decoracoes"<<std::endl;

    int escolha_tipo=0;
    std::cin>>escolha_tipo;

    std::cout<<"Que faixa de preco voce deseja?"<<std::endl;
    std::cout<<"[1](1-50),[2](51-100),[3](101-150),[4](200+)"<<std::endl;

    int escolha_preco=0;
    std::cin>>escolha_preco;

    produto0.imprimir_escolha(escolha_tipo,escolha_preco);






    return 0;
}



