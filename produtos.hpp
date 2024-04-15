#include <iostream>
#include <string>
#include <fstream>


class PRODUTO{
    
    //IMPLEMENTAÇÃO
    private:
        std::string nome;
        int faixa_de_preco=0;
        int quantidade=0;

    public:
    //INTERFACE

        //ABRIR ARQUIVO PARA LEITURA
        void abrir_arquivo(){
            std::string nome_arquivo = "catalogo.txt";
            std::ifstream arquivo(nome_arquivo);
            //verificar abertura
            if (!arquivo.is_open()){
                std::cout<<"Erro ao abrir o arquivo"<<std::endl;
            }


        }


};