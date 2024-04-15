#include <iostream>
#include <string>
#include "produtos.hpp"



int main(){
    
    //Executavel
    
    //DESCONTO
    std::cout<<"Bem vindo(a) a loja virtual!"<<std::endl;
    std::cout<<"Voce deseja ver os produtos com desconto? [1]Sim/[2]Nao"<<std::endl;
    
    int desconto_desejado=0;
    std::cin>>desconto_desejado;

    if(desconto_desejado!=1||desconto_desejado!=2)
    {
        std::cout<<"ERRO! OPCAO INVALIDA"<<std::endl;
    }
    else if (desconto_desejado==1)
    {
        //CHAMADA DA FUNÇÃO FILTRAGEM POR PREÇO
    }
    else{
        
        //TIPO DO PRODUTO
        std::cout<<"Qual o tipo de produto que voce busca?"<<std::endl;
        std::cout<<"Eletrodomestico,Decoracao ou Movel"<<std::endl;
    
        std::string tipo_desejado;
        std::cin>>tipo_desejado;

        if(tipo_desejado!="Eletrodomestico"||tipo_desejado!="Decoracao"||tipo_desejado!="Movel"){
        std::cout<<"ERRO! OPCAO INVALIDA"<<std::endl;
        }
        else{
            //CHAMADA DA FUNÇÃO DE FILTRAGEM POR NOME
        }
    
        //MARGEM DE PREÇO
        std::cout<<"Qual a margem de preco do produto que voce busca?"<<std::endl;
        std::cout<<"[1](0-50),[2](51-100),[3](101-150),[4](200+)"<<std::endl;

        int valor_desejado=0;
        std::cin>>valor_desejado;

        if(valor_desejado<0||valor_desejado>4){
        std::cout<<"ERRO! VALOR INVALIDO"<<std::endl;
        }
        else{
            //CHAMADA DA FUNÇÃO DE FILTRAGEM POR PRECO
        }
    }




    return 0;
}